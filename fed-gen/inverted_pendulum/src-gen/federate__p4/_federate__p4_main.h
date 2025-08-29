#ifndef _FEDERATE__P4_MAIN_H
#define _FEDERATE__P4_MAIN_H
#include "include/core/reactor.h"
#include "__p4cp_in.h"
#include "_networksender_1_1.h"
#include "__p4ap_in.h"
#include "_networkreceiver_20.h"
#include "_networksender_0_0.h"
#include "_pi4.h"
#include "__p4av_in.h"
#include "_networkreceiver_21.h"
#include "_networkreceiver_23.h"
#include "__p4cv_in.h"
#include "_networkreceiver_19.h"
#include "_networkreceiver_18.h"
#include "__p4sim_start_time.h"
#ifndef TOP_LEVEL_PREAMBLE_1309783776_H
#define TOP_LEVEL_PREAMBLE_1309783776_H
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
#define TIMESTEP 0.05
#define TIME_PERIOD 800
#endif
typedef struct {
    struct self_base_t base;
#line 130 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src-gen/federate__p4/_federate__p4_main.h"
#line 131 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src-gen/federate__p4/_federate__p4_main.h"
} _federate__p4_main_main_self_t;
_federate__p4_main_main_self_t* new__federate__p4_main();
#endif // _FEDERATE__P4_MAIN_H
