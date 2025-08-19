#ifndef _PI1_H
#define _PI1_H
#include "include/core/reactor.h"
#include "_eigtree.h"
#include "__lf_gendelay_a5f3672c.h"
#include "__lf_gendelay_e043d9ec.h"
#include "__lf_gendelay_c31ba08c.h"
#include "_unpublished_store.h"
#include "_published_store.h"
#include "_app.h"
#ifndef TOP_LEVEL_PREAMBLE_1697125968_H
#define TOP_LEVEL_PREAMBLE_1697125968_H
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
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_AP_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_AV_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_CP_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_CV_in_t;
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
} _pi1_e1_p1_in_t;
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
} _pi1_e1_p2_in_t;
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
} _pi1_e1_p3_in_t;
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
} _pi1_e1_p1p2_in_t;
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
} _pi1_e1_p1p3_in_t;
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
} _pi1_e1_p2p1_in_t;
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
} _pi1_e1_p2p3_in_t;
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
} _pi1_e1_p3p1_in_t;
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
} _pi1_e1_p3p2_in_t;
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
} _pi1_e2_p1_in_t;
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
} _pi1_e2_p2_in_t;
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
} _pi1_e2_p3_in_t;
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
} _pi1_e2_p1p2_in_t;
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
} _pi1_e2_p1p3_in_t;
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
} _pi1_e2_p2p1_in_t;
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
} _pi1_e2_p2p3_in_t;
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
} _pi1_e2_p3p1_in_t;
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
} _pi1_e2_p3p2_in_t;
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
} _pi1_e3_p1_in_t;
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
} _pi1_e3_p2_in_t;
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
} _pi1_e3_p3_in_t;
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
} _pi1_e3_p1p2_in_t;
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
} _pi1_e3_p1p3_in_t;
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
} _pi1_e3_p2p1_in_t;
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
} _pi1_e3_p2p3_in_t;
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
} _pi1_e3_p3p1_in_t;
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
} _pi1_e3_p3p2_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    interval_t value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_sim_start_time_t;
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
} _pi1_e1_round0_out_t;
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
} _pi1_e1_p0p1_out_t;
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
} _pi1_e1_p0p2_out_t;
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
} _pi1_e1_p0p3_out_t;
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
} _pi1_e2_round0_out_t;
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
} _pi1_e2_p0p1_out_t;
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
} _pi1_e2_p0p2_out_t;
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
} _pi1_e2_p0p3_out_t;
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
} _pi1_e3_round0_out_t;
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
} _pi1_e3_p0p1_out_t;
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
} _pi1_e3_p0p2_out_t;
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
} _pi1_e3_p0p3_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_force_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    interval_t value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _pi1_sim_st_t;
typedef struct {
    struct self_base_t base;
#line 769 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_pi1.h"
#line 770 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_pi1.h"
    _pi1_AP_in_t* _lf_AP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AP_in_width;
    // Default input (in case it does not get connected)
    _pi1_AP_in_t _lf_default__AP_in;
    _pi1_AV_in_t* _lf_AV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AV_in_width;
    // Default input (in case it does not get connected)
    _pi1_AV_in_t _lf_default__AV_in;
    _pi1_CP_in_t* _lf_CP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CP_in_width;
    // Default input (in case it does not get connected)
    _pi1_CP_in_t _lf_default__CP_in;
    _pi1_CV_in_t* _lf_CV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CV_in_width;
    // Default input (in case it does not get connected)
    _pi1_CV_in_t _lf_default__CV_in;
    _pi1_e1_p1_in_t* _lf_e1_p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p1_in_t _lf_default__e1_p1_in;
    _pi1_e1_p2_in_t* _lf_e1_p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p2_in_t _lf_default__e1_p2_in;
    _pi1_e1_p3_in_t* _lf_e1_p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p3_in_t _lf_default__e1_p3_in;
    _pi1_e1_p1p2_in_t* _lf_e1_p1p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p1p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p1p2_in_t _lf_default__e1_p1p2_in;
    _pi1_e1_p1p3_in_t* _lf_e1_p1p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p1p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p1p3_in_t _lf_default__e1_p1p3_in;
    _pi1_e1_p2p1_in_t* _lf_e1_p2p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p2p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p2p1_in_t _lf_default__e1_p2p1_in;
    _pi1_e1_p2p3_in_t* _lf_e1_p2p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p2p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p2p3_in_t _lf_default__e1_p2p3_in;
    _pi1_e1_p3p1_in_t* _lf_e1_p3p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p3p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p3p1_in_t _lf_default__e1_p3p1_in;
    _pi1_e1_p3p2_in_t* _lf_e1_p3p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e1_p3p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e1_p3p2_in_t _lf_default__e1_p3p2_in;
    _pi1_e2_p1_in_t* _lf_e2_p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p1_in_t _lf_default__e2_p1_in;
    _pi1_e2_p2_in_t* _lf_e2_p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p2_in_t _lf_default__e2_p2_in;
    _pi1_e2_p3_in_t* _lf_e2_p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p3_in_t _lf_default__e2_p3_in;
    _pi1_e2_p1p2_in_t* _lf_e2_p1p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p1p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p1p2_in_t _lf_default__e2_p1p2_in;
    _pi1_e2_p1p3_in_t* _lf_e2_p1p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p1p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p1p3_in_t _lf_default__e2_p1p3_in;
    _pi1_e2_p2p1_in_t* _lf_e2_p2p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p2p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p2p1_in_t _lf_default__e2_p2p1_in;
    _pi1_e2_p2p3_in_t* _lf_e2_p2p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p2p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p2p3_in_t _lf_default__e2_p2p3_in;
    _pi1_e2_p3p1_in_t* _lf_e2_p3p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p3p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p3p1_in_t _lf_default__e2_p3p1_in;
    _pi1_e2_p3p2_in_t* _lf_e2_p3p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e2_p3p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e2_p3p2_in_t _lf_default__e2_p3p2_in;
    _pi1_e3_p1_in_t* _lf_e3_p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p1_in_t _lf_default__e3_p1_in;
    _pi1_e3_p2_in_t* _lf_e3_p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p2_in_t _lf_default__e3_p2_in;
    _pi1_e3_p3_in_t* _lf_e3_p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p3_in_t _lf_default__e3_p3_in;
    _pi1_e3_p1p2_in_t* _lf_e3_p1p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p1p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p1p2_in_t _lf_default__e3_p1p2_in;
    _pi1_e3_p1p3_in_t* _lf_e3_p1p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p1p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p1p3_in_t _lf_default__e3_p1p3_in;
    _pi1_e3_p2p1_in_t* _lf_e3_p2p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p2p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p2p1_in_t _lf_default__e3_p2p1_in;
    _pi1_e3_p2p3_in_t* _lf_e3_p2p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p2p3_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p2p3_in_t _lf_default__e3_p2p3_in;
    _pi1_e3_p3p1_in_t* _lf_e3_p3p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p3p1_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p3p1_in_t _lf_default__e3_p3p1_in;
    _pi1_e3_p3p2_in_t* _lf_e3_p3p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_e3_p3p2_in_width;
    // Default input (in case it does not get connected)
    _pi1_e3_p3p2_in_t _lf_default__e3_p3p2_in;
    _pi1_sim_start_time_t* _lf_sim_start_time;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_start_time_width;
    // Default input (in case it does not get connected)
    _pi1_sim_start_time_t _lf_default__sim_start_time;
    _pi1_e1_round0_out_t _lf_e1_round0_out;
    int _lf_e1_round0_out_width;
    _pi1_e1_p0p1_out_t _lf_e1_p0p1_out;
    int _lf_e1_p0p1_out_width;
    _pi1_e1_p0p2_out_t _lf_e1_p0p2_out;
    int _lf_e1_p0p2_out_width;
    _pi1_e1_p0p3_out_t _lf_e1_p0p3_out;
    int _lf_e1_p0p3_out_width;
    _pi1_e2_round0_out_t _lf_e2_round0_out;
    int _lf_e2_round0_out_width;
    _pi1_e2_p0p1_out_t _lf_e2_p0p1_out;
    int _lf_e2_p0p1_out_width;
    _pi1_e2_p0p2_out_t _lf_e2_p0p2_out;
    int _lf_e2_p0p2_out_width;
    _pi1_e2_p0p3_out_t _lf_e2_p0p3_out;
    int _lf_e2_p0p3_out_width;
    _pi1_e3_round0_out_t _lf_e3_round0_out;
    int _lf_e3_round0_out_width;
    _pi1_e3_p0p1_out_t _lf_e3_p0p1_out;
    int _lf_e3_p0p1_out_width;
    _pi1_e3_p0p2_out_t _lf_e3_p0p2_out;
    int _lf_e3_p0p2_out_width;
    _pi1_e3_p0p3_out_t _lf_e3_p0p3_out;
    int _lf_e3_p0p3_out_width;
    _pi1_force_t _lf_force;
    int _lf_force_width;
    _pi1_sim_st_t _lf_sim_st;
    int _lf_sim_st_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__AP_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__AV_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__CP_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__CV_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p1p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p1p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p2p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p2p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p3p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e1_p3p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p1p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p1p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p2p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p2p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p3p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e2_p3p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p1p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p1p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p2p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p2p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p3p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__e3_p3p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_start_time;
    reaction_t* _lf__sim_start_time_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _pi1_self_t;
_pi1_self_t* new__pi1();
#endif // _PI1_H
