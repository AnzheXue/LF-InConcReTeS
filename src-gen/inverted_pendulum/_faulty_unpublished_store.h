#ifndef _FAULTY_UNPUBLISHED_STORE_H
#define _FAULTY_UNPUBLISHED_STORE_H
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
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _faulty_unpublished_store_error_t;
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
} _faulty_unpublished_store_integral_t;
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
} _faulty_unpublished_store_global_target_t;
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
} _faulty_unpublished_store_output_error_t;
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
} _faulty_unpublished_store_output_integral_t;
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
} _faulty_unpublished_store_output_target_t;
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
} _faulty_unpublished_store_sw_t;
typedef struct {
    struct self_base_t base;
#line 188 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_faulty_unpublished_store.h"
    #line 526 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    double error;
    #line 527 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    double integral;
    #line 528 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    double global_target;
#line 195 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_faulty_unpublished_store.h"
    _faulty_unpublished_store_error_t* _lf_error;
    // width of -2 indicates that it is not a multiport.
    int _lf_error_width;
    // Default input (in case it does not get connected)
    _faulty_unpublished_store_error_t _lf_default__error;
    _faulty_unpublished_store_integral_t* _lf_integral;
    // width of -2 indicates that it is not a multiport.
    int _lf_integral_width;
    // Default input (in case it does not get connected)
    _faulty_unpublished_store_integral_t _lf_default__integral;
    _faulty_unpublished_store_global_target_t* _lf_global_target;
    // width of -2 indicates that it is not a multiport.
    int _lf_global_target_width;
    // Default input (in case it does not get connected)
    _faulty_unpublished_store_global_target_t _lf_default__global_target;
    _faulty_unpublished_store_output_error_t _lf_output_error;
    int _lf_output_error_width;
    _faulty_unpublished_store_output_integral_t _lf_output_integral;
    int _lf_output_integral_width;
    _faulty_unpublished_store_output_target_t _lf_output_target;
    int _lf_output_target_width;
    _faulty_unpublished_store_sw_t _lf_sw;
    int _lf_sw_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__error;
    reaction_t* _lf__error_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__integral;
    reaction_t* _lf__integral_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__global_target;
    reaction_t* _lf__global_target_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _faulty_unpublished_store_self_t;
_faulty_unpublished_store_self_t* new__faulty_unpublished_store();
#endif // _FAULTY_UNPUBLISHED_STORE_H
