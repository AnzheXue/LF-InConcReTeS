scp leap10:~/LinguaFrancaRemote/inverted_pendulum/bin/raw_timing_IvPSim.csv ./evaluation/raw_timing_IvPSim_10ms.csv

hosts=(leap11 leap12 leap13 leap14)

for h in "${hosts[@]}"; do
  scp $h:~/LinguaFrancaRemote/inverted_pendulum/bin/raw_timing_KVS.csv \
      "./evaluation/raw_timing_KVS_${h}_10ms.csv"
done