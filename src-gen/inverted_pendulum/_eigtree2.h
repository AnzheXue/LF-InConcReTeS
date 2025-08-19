#ifndef _EIGTREE2_H
#define _EIGTREE2_H
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
} _eigtree2_p1p2_in_t;
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
} _eigtree2_p1p3_in_t;
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
} _eigtree2_p2p1_in_t;
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
} _eigtree2_p2p3_in_t;
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
} _eigtree2_p3p1_in_t;
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
} _eigtree2_p3p2_in_t;
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
} _eigtree2_p0p1p2_out_t;
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
} _eigtree2_p0p1p3_out_t;
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
} _eigtree2_p0p2p1_out_t;
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
} _eigtree2_p0p2p3_out_t;
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
} _eigtree2_p0p3p1_out_t;
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
} _eigtree2_p0p3p2_out_t;
typedef struct {
    struct self_base_t base;
#line 258 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_eigtree2.h"
#line 259 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_eigtree2.h"
    _eigtree2_p1p2_in_t* _lf_p1p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p1p2_in_t _lf_default__p1p2_in;
    _eigtree2_p1p3_in_t* _lf_p1p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p1p3_in_t _lf_default__p1p3_in;
    _eigtree2_p2p1_in_t* _lf_p2p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p2p1_in_t _lf_default__p2p1_in;
    _eigtree2_p2p3_in_t* _lf_p2p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p2p3_in_t _lf_default__p2p3_in;
    _eigtree2_p3p1_in_t* _lf_p3p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p3p1_in_t _lf_default__p3p1_in;
    _eigtree2_p3p2_in_t* _lf_p3p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree2_p3p2_in_t _lf_default__p3p2_in;
    _eigtree2_p0p1p2_out_t _lf_p0p1p2_out;
    int _lf_p0p1p2_out_width;
    _eigtree2_p0p1p3_out_t _lf_p0p1p3_out;
    int _lf_p0p1p3_out_width;
    _eigtree2_p0p2p1_out_t _lf_p0p2p1_out;
    int _lf_p0p2p1_out_width;
    _eigtree2_p0p2p3_out_t _lf_p0p2p3_out;
    int _lf_p0p2p3_out_width;
    _eigtree2_p0p3p1_out_t _lf_p0p3p1_out;
    int _lf_p0p3p1_out_width;
    _eigtree2_p0p3p2_out_t _lf_p0p3p2_out;
    int _lf_p0p3p2_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    trigger_t _lf__p1p2_in;
    reaction_t* _lf__p1p2_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p1p3_in;
    reaction_t* _lf__p1p3_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2p1_in;
    reaction_t* _lf__p2p1_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2p3_in;
    reaction_t* _lf__p2p3_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3p1_in;
    reaction_t* _lf__p3p1_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3p2_in;
    reaction_t* _lf__p3p2_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _eigtree2_self_t;
_eigtree2_self_t* new__eigtree2();
#endif // _EIGTREE2_H
