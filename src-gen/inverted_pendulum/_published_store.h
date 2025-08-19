#ifndef _PUBLISHED_STORE_H
#define _PUBLISHED_STORE_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_232886115_H
#define TOP_LEVEL_PREAMBLE_232886115_H
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

static FILE* _csv2 = NULL;
static void open_csv2() {
    if (!_csv2) {
        _csv2 = fopen("raw_timing_IvPSim.csv", "w");
        fprintf(_csv2, "metric,period_ms,ms\n");
        fflush(_csv2);
    }
}

static void log_raw2(const char* metric, long long period_ms, long long delta) {
    open_csv2();
    fprintf(_csv2, "%s,%lld,%lld\n", metric, period_ms, delta);
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


#define sqr(x) ((x)*(x))
#define MAX_VERSIONS 20
#define PUBLISHING_INTERVAL 10000000
#define TIMESTEP 0.05
#define TIME_PERIOD 50
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
} _published_store_input_globalT_t;
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
} _published_store_input_globalI_t;
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
} _published_store_input_globalE_t;
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
} _published_store_request_T_t;
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
} _published_store_request_I_t;
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
} _published_store_request_E_t;
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
} _published_store_output_globalT_t;
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
} _published_store_output_globalI_t;
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
} _published_store_output_globalE_t;
typedef struct {
    struct self_base_t base;
#line 216 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_published_store.h"
    #line 597 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    tuple g_target;
    #line 598 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    tuple global_integral;
    #line 599 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    tuple global_error;
    #line 601 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int version_T_count;
    #line 602 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int version_I_count;
    #line 603 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int version_E_count;
    #line 605 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int min_index_T;
    #line 606 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int min_index_I;
    #line 607 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    int min_index_E;
#line 235 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_published_store.h"
    _published_store_input_globalT_t* _lf_input_globalT;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalT_width;
    // Default input (in case it does not get connected)
    _published_store_input_globalT_t _lf_default__input_globalT;
    _published_store_input_globalI_t* _lf_input_globalI;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalI_width;
    // Default input (in case it does not get connected)
    _published_store_input_globalI_t _lf_default__input_globalI;
    _published_store_input_globalE_t* _lf_input_globalE;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalE_width;
    // Default input (in case it does not get connected)
    _published_store_input_globalE_t _lf_default__input_globalE;
    _published_store_request_T_t* _lf_request_T;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_T_width;
    // Default input (in case it does not get connected)
    _published_store_request_T_t _lf_default__request_T;
    _published_store_request_I_t* _lf_request_I;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_I_width;
    // Default input (in case it does not get connected)
    _published_store_request_I_t _lf_default__request_I;
    _published_store_request_E_t* _lf_request_E;
    // width of -2 indicates that it is not a multiport.
    int _lf_request_E_width;
    // Default input (in case it does not get connected)
    _published_store_request_E_t _lf_default__request_E;
    _published_store_output_globalT_t _lf_output_globalT;
    int _lf_output_globalT_width;
    _published_store_output_globalI_t _lf_output_globalI;
    int _lf_output_globalI_width;
    _published_store_output_globalE_t _lf_output_globalE;
    int _lf_output_globalE_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    reaction_t _lf__reaction_6;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__input_globalT;
    reaction_t* _lf__input_globalT_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__input_globalI;
    reaction_t* _lf__input_globalI_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__input_globalE;
    reaction_t* _lf__input_globalE_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_T;
    reaction_t* _lf__request_T_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_I;
    reaction_t* _lf__request_I_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__request_E;
    reaction_t* _lf__request_E_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _published_store_self_t;
_published_store_self_t* new__published_store();
#endif // _PUBLISHED_STORE_H
