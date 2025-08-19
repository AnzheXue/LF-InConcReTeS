#ifndef _APP_H
#define _APP_H
#include "include/core/reactor.h"
#include "__lf_gendelay_6dc5480.h"
#include "_reader.h"
#include "_actuator.h"
#include "__lf_gendelay_31176f20.h"
#include "_writer.h"
#include "__lf_gendelay_5b5289c0.h"
#include "_compute.h"
#ifndef TOP_LEVEL_PREAMBLE_1730157389_H
#define TOP_LEVEL_PREAMBLE_1730157389_H
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
} _app_AP_in_t;
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
} _app_AV_in_t;
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
} _app_CP_in_t;
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
} _app_CV_in_t;
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
} _app_input_globalI_t;
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
} _app_input_globalT_t;
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
} _app_input_globalE_t;
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
} _app_output_target_t;
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
} _app_output_force_t;
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
} _app_output_integral_t;
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
} _app_output_error_t;
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
} _app_request_T_t;
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
} _app_request_I_t;
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
} _app_request_E_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _app_sr_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _app_tr_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _app_tw_t;
typedef struct {
    struct self_base_t base;
#line 363 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_app.h"
#line 364 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_app.h"
    _app_AP_in_t* _lf_AP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AP_in_width;
    // Default input (in case it does not get connected)
    _app_AP_in_t _lf_default__AP_in;
    _app_AV_in_t* _lf_AV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AV_in_width;
    // Default input (in case it does not get connected)
    _app_AV_in_t _lf_default__AV_in;
    _app_CP_in_t* _lf_CP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CP_in_width;
    // Default input (in case it does not get connected)
    _app_CP_in_t _lf_default__CP_in;
    _app_CV_in_t* _lf_CV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CV_in_width;
    // Default input (in case it does not get connected)
    _app_CV_in_t _lf_default__CV_in;
    _app_input_globalI_t* _lf_input_globalI;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalI_width;
    // Default input (in case it does not get connected)
    _app_input_globalI_t _lf_default__input_globalI;
    _app_input_globalT_t* _lf_input_globalT;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalT_width;
    // Default input (in case it does not get connected)
    _app_input_globalT_t _lf_default__input_globalT;
    _app_input_globalE_t* _lf_input_globalE;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalE_width;
    // Default input (in case it does not get connected)
    _app_input_globalE_t _lf_default__input_globalE;
    _app_output_target_t _lf_output_target;
    int _lf_output_target_width;
    _app_output_force_t _lf_output_force;
    int _lf_output_force_width;
    _app_output_integral_t _lf_output_integral;
    int _lf_output_integral_width;
    _app_output_error_t _lf_output_error;
    int _lf_output_error_width;
    _app_request_T_t _lf_request_T;
    int _lf_request_T_width;
    _app_request_I_t _lf_request_I;
    int _lf_request_I_width;
    _app_request_E_t _lf_request_E;
    int _lf_request_E_width;
    _app_sr_t _lf_sr;
    int _lf_sr_width;
    _app_tr_t _lf_tr;
    int _lf_tr_width;
    _app_tw_t _lf_tw;
    int _lf_tw_width;
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
    trigger_t _lf__input_globalI;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__input_globalT;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__input_globalE;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _app_self_t;
_app_self_t* new__app();
#endif // _APP_H
