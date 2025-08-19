#ifndef _FEDERATE__P2_MAIN_H
#define _FEDERATE__P2_MAIN_H
#include "include/core/reactor.h"
#include "__p2e2_p1p3_in.h"
#include "__p2av_in.h"
#include "__p2e2_p3_in.h"
#include "_networkreceiver_40.h"
#include "_networkreceiver_121.h"
#include "_networkreceiver_83.h"
#include "_networkreceiver_42.h"
#include "_networkreceiver_85.h"
#include "_networksender_23_23.h"
#include "_networksender_27_27.h"
#include "__p2e3_p2_in.h"
#include "_networkreceiver_128.h"
#include "_networkreceiver_38.h"
#include "_networkreceiver_33.h"
#include "__p2e2_p3p2_in.h"
#include "_networkreceiver_123.h"
#include "_networksender_17_17.h"
#include "_networksender_13_13.h"
#include "__p2e2_p1p2_in.h"
#include "__p2e1_p3_in.h"
#include "_networksender_4_4.h"
#include "_networksender_20_20.h"
#include "__p2cv_in.h"
#include "_networksender_2_2.h"
#include "_networkreceiver_132.h"
#include "__p2e3_p1_in.h"
#include "_networkreceiver_31.h"
#include "_networkreceiver_130.h"
#include "_networksender_0_0.h"
#include "_networksender_24_24.h"
#include "__p2e1_p2p3_in.h"
#include "_networksender_28_28.h"
#include "__p2e3_p3p1_in.h"
#include "_networkreceiver_137.h"
#include "__p2e2_p2p1_in.h"
#include "_networkreceiver_9.h"
#include "_pi2.h"
#include "_networkreceiver_24.h"
#include "_networkreceiver_6.h"
#include "__p2e1_p3p1_in.h"
#include "_networkreceiver_8.h"
#include "_networksender_8_8.h"
#include "_networkreceiver_7.h"
#include "__p2e3_p2p3_in.h"
#include "_networksender_12_12.h"
#include "_networkreceiver_29.h"
#include "_networksender_6_6.h"
#include "_networksender_16_16.h"
#include "__p2e1_p2_in.h"
#include "__p2e1_p1p3_in.h"
#include "_networksender_21_21.h"
#include "__p2e2_p1_in.h"
#include "__p2e3_p1p3_in.h"
#include "_networksender_25_25.h"
#include "__p2e3_p3p2_in.h"
#include "_networkreceiver_11.h"
#include "_networkreceiver_99.h"
#include "_networkreceiver_103.h"
#include "_networkreceiver_101.h"
#include "__p2e1_p3p2_in.h"
#include "_networksender_19_19.h"
#include "_networksender_11_11.h"
#include "_networksender_15_15.h"
#include "_networkreceiver_108.h"
#include "__p2ap_in.h"
#include "__p2sim_start_time.h"
#include "_networksender_3_3.h"
#include "__p2e1_p1_in.h"
#include "__p2e2_p2_in.h"
#include "_networksender_1_1.h"
#include "__p2e3_p1p2_in.h"
#include "_networkreceiver_94.h"
#include "__p2e2_p2p3_in.h"
#include "__p2e2_p3p1_in.h"
#include "_networksender_22_22.h"
#include "_networksender_26_26.h"
#include "_networkreceiver_90.h"
#include "_networkreceiver_92.h"
#include "__p2e3_p3_in.h"
#include "_networkreceiver_47.h"
#include "__p2e1_p2p1_in.h"
#include "_networkreceiver_49.h"
#include "_networkreceiver_114.h"
#include "_networksender_9_9.h"
#include "_networkreceiver_112.h"
#include "_networksender_18_18.h"
#include "__p2e3_p2p1_in.h"
#include "_networksender_7_7.h"
#include "__p2e1_p1p2_in.h"
#include "_networksender_5_5.h"
#include "_networksender_10_10.h"
#include "__p2cp_in.h"
#include "_networksender_14_14.h"
#include "_networkreceiver_119.h"
#ifndef TOP_LEVEL_PREAMBLE_1061316268_H
#define TOP_LEVEL_PREAMBLE_1061316268_H
#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/network/socket_common.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
typedef struct {
    char key[32 + 1];
    double value;
    uint64_t time;
} tuple;

typedef struct {
    double value;
    int count;
    int first_index;
} tally;

typedef struct {
    double value;
    uint64_t time;
} version;

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int successful_reads = 0;
static int total_reads = 0;

static int successful_writes = 0;
static int total_writes = 0;

static FILE* _csv = NULL;

static void open_csv() {
    if (!_csv) {
        _csv = fopen("raw_timing_KVS.csv", "w");
        fprintf(_csv, "metric,period_ms,ms,successful_reads,total_reads,successful_writes,total_writes\n");
        fflush(_csv);
    }
}

static void log_raw(const char* metric, long long period_ms, long long delta, int sr, int tr, int sw, int tw) {
    open_csv();
    fprintf(_csv, "%s,%lld,%lld,%d,%d,%d,%d\n", metric, period_ms, delta,
            sr, tr, sw, tw);
    fflush(_csv);
}

// static void log_raw(const char* metric, long long period_ms, long long delta) {
//     open_csv();
//     fprintf(_csv, "%s,%lld,%lld,%d,%d,%d,%d\n", metric, period_ms, delta,
//             successful_reads, total_reads, successful_writes, total_writes);
//     fflush(_csv);
// }

static FILE* _csv2 = NULL;
static void open_csv2() {
    if (!_csv2) {
        _csv2 = fopen("raw_timing_IvPSim.csv", "w");
        fprintf(_csv2, "metric,period_ms,ms,lag_ms\n");
        fflush(_csv2);
    }
}

static void log_raw2(const char* metric, long long period_ms, long long delta, long long lag) {
    open_csv2();
    fprintf(_csv2, "%s,%lld,%lld,%lld\n", metric, period_ms, delta, lag);
    fflush(_csv2);
}

static void add_total_reads(int reads) {
    total_reads += reads;
}

static void add_successful_reads(int reads) {
    successful_reads += reads;
}

static void add_total_writes(int writes) {
    total_writes += writes;
}

static void add_successful_writes(int writes) {
    successful_writes += writes;
}

static int cmp_double(const void *a, const void *b) {
    double da = *(const double*)a;
    double db = *(const double*)b;
    return (da < db) ? -1 : (da > db) ? +1 : 0;
}

#define sqr(x) ((x)*(x))
#define MAX_VERSIONS 20
#define PUBLISHING_INTERVAL 10000000
#define TIMESTEP 0.05
#define TIME_PERIOD 10
#endif
typedef struct {
    struct self_base_t base;
#line 212 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_federate__p2_main.h"
#line 213 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_federate__p2_main.h"
} _federate__p2_main_main_self_t;
_federate__p2_main_main_self_t* new__federate__p2_main();
#endif // _FEDERATE__P2_MAIN_H
