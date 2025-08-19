#!/usr/bin/env bash
set -euo pipefail

REMOTE_BIN="$HOME/LinguaFrancaRemote/inverted_pendulum/bin"

SENSOR_HOSTS=(leap11 leap12 leap13 leap14)

# echo "Killing old RTI…"
# ssh -o BatchMode=yes leap10 \
#     "pkill -f RTI" || true

echo "[$(date '+%T')] Starting RTI on leap10..."
ssh -f leap10 "cd ${REMOTE_BIN} && nohup ./RTI -n 9 &"

sleep 2

echo "[$(date '+%T')] Starting federate__plant on leap10..."
ssh -f leap10 "cd ${REMOTE_BIN} && nohup ./federate__plant &"

for i in {1..4}; do
  HOST="${SENSOR_HOSTS[$((i-1))]}"
  
  echo "[$(date '+%T')] Starting federate__s${i} on ${HOST}..."
  ssh -f "${HOST}" \
    "cd ${REMOTE_BIN} && nohup ./federate__s${i} &"

  echo "[$(date '+%T')] Starting federate__p${i} on ${HOST}..."
  ssh -f "${HOST}" \
    "cd ${REMOTE_BIN} && nohup ./federate__p${i} &"
done

echo "[$(date '+%T')] All federates launched."