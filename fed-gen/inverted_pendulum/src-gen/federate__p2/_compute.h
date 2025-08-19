#ifndef _COMPUTE_H
#define _COMPUTE_H
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
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _compute_AP_in_t;
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
} _compute_AV_in_t;
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
} _compute_CP_in_t;
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
} _compute_CV_in_t;
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
} _compute_globalT_t;
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
} _compute_globalI_t;
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
} _compute_globalE_t;
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
} _compute_error_t;
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
} _compute_integral_t;
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
} _compute_global_target_t;
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
} _compute_force_t;
typedef struct {
    struct self_base_t base;
#line 272 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_compute.h"
    #line 284 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double g_target;
    #line 285 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double global_integral;
    #line 286 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double global_error;
    #line 287 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    interval_t last_arrival_time;
    #line 289 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double Kp;
    #line 290 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double Ki;
    #line 291 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double Kd;
    #line 293 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double AP;
    #line 294 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double globalI;
    #line 295 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double globalE;
    #line 296 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    double globalT;
#line 295 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_compute.h"
    _compute_AP_in_t* _lf_AP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AP_in_width;
    // Default input (in case it does not get connected)
    _compute_AP_in_t _lf_default__AP_in;
    _compute_AV_in_t* _lf_AV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AV_in_width;
    // Default input (in case it does not get connected)
    _compute_AV_in_t _lf_default__AV_in;
    _compute_CP_in_t* _lf_CP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CP_in_width;
    // Default input (in case it does not get connected)
    _compute_CP_in_t _lf_default__CP_in;
    _compute_CV_in_t* _lf_CV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CV_in_width;
    // Default input (in case it does not get connected)
    _compute_CV_in_t _lf_default__CV_in;
    _compute_globalT_t* _lf_globalT;
    // width of -2 indicates that it is not a multiport.
    int _lf_globalT_width;
    // Default input (in case it does not get connected)
    _compute_globalT_t _lf_default__globalT;
    _compute_globalI_t* _lf_globalI;
    // width of -2 indicates that it is not a multiport.
    int _lf_globalI_width;
    // Default input (in case it does not get connected)
    _compute_globalI_t _lf_default__globalI;
    _compute_globalE_t* _lf_globalE;
    // width of -2 indicates that it is not a multiport.
    int _lf_globalE_width;
    // Default input (in case it does not get connected)
    _compute_globalE_t _lf_default__globalE;
    _compute_error_t _lf_error;
    int _lf_error_width;
    _compute_integral_t _lf_integral;
    int _lf_integral_width;
    _compute_global_target_t _lf_global_target;
    int _lf_global_target_width;
    _compute_force_t _lf_force;
    int _lf_force_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__AP_in;
    reaction_t* _lf__AP_in_reactions[1];
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
    trigger_t _lf__globalT;
    reaction_t* _lf__globalT_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__globalI;
    reaction_t* _lf__globalI_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__globalE;
    reaction_t* _lf__globalE_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _compute_self_t;
_compute_self_t* new__compute();
#endif // _COMPUTE_H
