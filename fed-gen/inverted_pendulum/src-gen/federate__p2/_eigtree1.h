#ifndef _EIGTREE1_H
#define _EIGTREE1_H
#include "include/core/reactor.h"
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
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p1_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p2_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p3_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p0p1_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p0p2_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _eigtree1_p0p3_out_t;
typedef struct {
    struct self_base_t base;
#line 202 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_eigtree1.h"
#line 203 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_eigtree1.h"
    _eigtree1_p1_in_t* _lf_p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree1_p1_in_t _lf_default__p1_in;
    _eigtree1_p2_in_t* _lf_p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree1_p2_in_t _lf_default__p2_in;
    _eigtree1_p3_in_t* _lf_p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree1_p3_in_t _lf_default__p3_in;
    _eigtree1_p0p1_out_t _lf_p0p1_out;
    int _lf_p0p1_out_width;
    _eigtree1_p0p2_out_t _lf_p0p2_out;
    int _lf_p0p2_out_width;
    _eigtree1_p0p3_out_t _lf_p0p3_out;
    int _lf_p0p3_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__p1_in;
    reaction_t* _lf__p1_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2_in;
    reaction_t* _lf__p2_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3_in;
    reaction_t* _lf__p3_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _eigtree1_self_t;
_eigtree1_self_t* new__eigtree1();
#endif // _EIGTREE1_H
