#ifndef _PLANT_H
#define _PLANT_H
#include "include/core/reactor.h"
#include "__lf_gendelay_24158c18.h"
#include "_plant_sensor.h"
#include "_plant_actuator.h"
#ifndef TOP_LEVEL_PREAMBLE_2106031300_H
#define TOP_LEVEL_PREAMBLE_2106031300_H
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
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _plant_a1_force_t;
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
} _plant_a2_force_t;
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
} _plant_a3_force_t;
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
} _plant_a4_force_t;
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
} _plant_request_s1_t;
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
} _plant_request_s2_t;
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
} _plant_request_s3_t;
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
} _plant_request_s4_t;
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
} _plant_sim_st_p1_t;
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
} _plant_sim_st_p2_t;
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
} _plant_sim_st_p3_t;
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
} _plant_sim_st_p4_t;
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
} _plant_s1_AP_out_t;
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
} _plant_s1_AV_out_t;
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
} _plant_s1_CP_out_t;
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
} _plant_s1_CV_out_t;
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
} _plant_s2_AP_out_t;
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
} _plant_s2_AV_out_t;
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
} _plant_s2_CP_out_t;
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
} _plant_s2_CV_out_t;
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
} _plant_s3_AP_out_t;
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
} _plant_s3_AV_out_t;
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
} _plant_s3_CP_out_t;
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
} _plant_s3_CV_out_t;
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
} _plant_s4_AP_out_t;
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
} _plant_s4_AV_out_t;
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
} _plant_s4_CP_out_t;
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
} _plant_s4_CV_out_t;
typedef struct {
    struct self_base_t base;
#line 513 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__plant/_plant.h"
#line 514 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__plant/_plant.h"
    _plant_a1_force_t* _lf_a1_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a1_force_width;
    // Default input (in case it does not get connected)
    _plant_a1_force_t _lf_default__a1_force;
    _plant_a2_force_t* _lf_a2_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a2_force_width;
    // Default input (in case it does not get connected)
    _plant_a2_force_t _lf_default__a2_force;
    _plant_a3_force_t* _lf_a3_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a3_force_width;
    // Default input (in case it does not get connected)
    _plant_a3_force_t _lf_default__a3_force;
    _plant_a4_force_t* _lf_a4_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a4_force_width;
    // Default input (in case it does not get connected)
    _plant_a4_force_t _lf_default__a4_force;
    _plant_request_s1_t* _lf_request_s1;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_s1_width;
    // Default input (in case it does not get connected)
    _plant_request_s1_t _lf_default__request_s1;
    _plant_request_s2_t* _lf_request_s2;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_s2_width;
    // Default input (in case it does not get connected)
    _plant_request_s2_t _lf_default__request_s2;
    _plant_request_s3_t* _lf_request_s3;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_s3_width;
    // Default input (in case it does not get connected)
    _plant_request_s3_t _lf_default__request_s3;
    _plant_request_s4_t* _lf_request_s4;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_s4_width;
    // Default input (in case it does not get connected)
    _plant_request_s4_t _lf_default__request_s4;
    _plant_sim_st_p1_t* _lf_sim_st_p1;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p1_width;
    // Default input (in case it does not get connected)
    _plant_sim_st_p1_t _lf_default__sim_st_p1;
    _plant_sim_st_p2_t* _lf_sim_st_p2;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p2_width;
    // Default input (in case it does not get connected)
    _plant_sim_st_p2_t _lf_default__sim_st_p2;
    _plant_sim_st_p3_t* _lf_sim_st_p3;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p3_width;
    // Default input (in case it does not get connected)
    _plant_sim_st_p3_t _lf_default__sim_st_p3;
    _plant_sim_st_p4_t* _lf_sim_st_p4;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p4_width;
    // Default input (in case it does not get connected)
    _plant_sim_st_p4_t _lf_default__sim_st_p4;
    _plant_s1_AP_out_t _lf_s1_AP_out;
    int _lf_s1_AP_out_width;
    _plant_s1_AV_out_t _lf_s1_AV_out;
    int _lf_s1_AV_out_width;
    _plant_s1_CP_out_t _lf_s1_CP_out;
    int _lf_s1_CP_out_width;
    _plant_s1_CV_out_t _lf_s1_CV_out;
    int _lf_s1_CV_out_width;
    _plant_s2_AP_out_t _lf_s2_AP_out;
    int _lf_s2_AP_out_width;
    _plant_s2_AV_out_t _lf_s2_AV_out;
    int _lf_s2_AV_out_width;
    _plant_s2_CP_out_t _lf_s2_CP_out;
    int _lf_s2_CP_out_width;
    _plant_s2_CV_out_t _lf_s2_CV_out;
    int _lf_s2_CV_out_width;
    _plant_s3_AP_out_t _lf_s3_AP_out;
    int _lf_s3_AP_out_width;
    _plant_s3_AV_out_t _lf_s3_AV_out;
    int _lf_s3_AV_out_width;
    _plant_s3_CP_out_t _lf_s3_CP_out;
    int _lf_s3_CP_out_width;
    _plant_s3_CV_out_t _lf_s3_CV_out;
    int _lf_s3_CV_out_width;
    _plant_s4_AP_out_t _lf_s4_AP_out;
    int _lf_s4_AP_out_width;
    _plant_s4_AV_out_t _lf_s4_AV_out;
    int _lf_s4_AV_out_width;
    _plant_s4_CP_out_t _lf_s4_CP_out;
    int _lf_s4_CP_out_width;
    _plant_s4_CV_out_t _lf_s4_CV_out;
    int _lf_s4_CV_out_width;
    trigger_t _lf__a1_force;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a2_force;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a3_force;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a4_force;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_s1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_s2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_s3;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_s4;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p3;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p4;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _plant_self_t;
_plant_self_t* new__plant();
#endif // _PLANT_H
