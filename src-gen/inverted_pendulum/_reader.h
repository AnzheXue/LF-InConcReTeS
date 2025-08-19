#ifndef _READER_H
#define _READER_H
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
} _reader_input_globalT_t;
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
} _reader_input_globalI_t;
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
} _reader_input_globalE_t;
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
} _reader_AP_in_t;
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
} _reader_AV_in_t;
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
} _reader_CP_in_t;
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
} _reader_CV_in_t;
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
} _reader_output_globalT_t;
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
} _reader_output_globalI_t;
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
} _reader_output_globalE_t;
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
} _reader_AP_out_t;
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
} _reader_AV_out_t;
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
} _reader_CP_out_t;
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
} _reader_CV_out_t;
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
} _reader_last_arrival_time_t;
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
} _reader_request_T_t;
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
} _reader_request_I_t;
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
} _reader_request_E_t;
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
} _reader_sr_t;
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
} _reader_tr_t;
typedef struct {
    struct self_base_t base;
#line 370 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.h"
#line 371 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.h"
    _reader_input_globalT_t* _lf_input_globalT;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalT_width;
    // Default input (in case it does not get connected)
    _reader_input_globalT_t _lf_default__input_globalT;
    _reader_input_globalI_t* _lf_input_globalI;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalI_width;
    // Default input (in case it does not get connected)
    _reader_input_globalI_t _lf_default__input_globalI;
    _reader_input_globalE_t* _lf_input_globalE;
    // width of -2 indicates that it is not a multiport.
    int _lf_input_globalE_width;
    // Default input (in case it does not get connected)
    _reader_input_globalE_t _lf_default__input_globalE;
    _reader_AP_in_t* _lf_AP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AP_in_width;
    // Default input (in case it does not get connected)
    _reader_AP_in_t _lf_default__AP_in;
    _reader_AV_in_t* _lf_AV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_AV_in_width;
    // Default input (in case it does not get connected)
    _reader_AV_in_t _lf_default__AV_in;
    _reader_CP_in_t* _lf_CP_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CP_in_width;
    // Default input (in case it does not get connected)
    _reader_CP_in_t _lf_default__CP_in;
    _reader_CV_in_t* _lf_CV_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_CV_in_width;
    // Default input (in case it does not get connected)
    _reader_CV_in_t _lf_default__CV_in;
    _reader_output_globalT_t _lf_output_globalT;
    int _lf_output_globalT_width;
    _reader_output_globalI_t _lf_output_globalI;
    int _lf_output_globalI_width;
    _reader_output_globalE_t _lf_output_globalE;
    int _lf_output_globalE_width;
    _reader_AP_out_t _lf_AP_out;
    int _lf_AP_out_width;
    _reader_AV_out_t _lf_AV_out;
    int _lf_AV_out_width;
    _reader_CP_out_t _lf_CP_out;
    int _lf_CP_out_width;
    _reader_CV_out_t _lf_CV_out;
    int _lf_CV_out_width;
    _reader_last_arrival_time_t _lf_last_arrival_time;
    int _lf_last_arrival_time_width;
    _reader_request_T_t _lf_request_T;
    int _lf_request_T_width;
    _reader_request_I_t _lf_request_I;
    int _lf_request_I_width;
    _reader_request_E_t _lf_request_E;
    int _lf_request_E_width;
    _reader_sr_t _lf_sr;
    int _lf_sr_width;
    _reader_tr_t _lf_tr;
    int _lf_tr_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    reaction_t _lf__reaction_6;
    reaction_t _lf__reaction_7;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
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
    trigger_t _lf__AP_in;
    reaction_t* _lf__AP_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__AV_in;
    reaction_t* _lf__AV_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__CP_in;
    reaction_t* _lf__CP_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__CV_in;
    reaction_t* _lf__CV_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _reader_self_t;
_reader_self_t* new__reader();
#endif // _READER_H
