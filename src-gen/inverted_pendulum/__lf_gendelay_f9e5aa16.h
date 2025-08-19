#ifndef __LF_GENDELAY_F9E5AA16_H
#define __LF_GENDELAY_F9E5AA16_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_698784309_H
#define TOP_LEVEL_PREAMBLE_698784309_H
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

static void log_raw(const char* metric, long long period_ms, long long delta, int successful_reads, int total_reads, int successful_writes, int total_writes) {
    open_csv();
    fprintf(_csv, "%s,%lld,%lld,%d,%d,%d,%d\n", metric, period_ms, delta,
            successful_reads, total_reads, successful_writes, total_writes);
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
    lf_print("Adding %d to total reads\n", reads);
    total_reads += reads;
    lf_print("Total reads: %d\n", total_reads);
}

static void add_successful_reads(int reads) {
    lf_print("Adding %d to successful reads\n", reads);
    successful_reads += reads;
    lf_print("Successful reads: %d\n", successful_reads);
}

static void add_total_writes(int writes) {
    lf_print("Adding %d to total writes\n", writes);
    total_writes += writes;
    lf_print("Total writes: %d\n", total_writes);
}

static void add_successful_writes(int writes) {
    lf_print("Adding %d to successful writes\n", writes);
    successful_writes += writes;
    lf_print("Successful writes: %d\n", successful_writes);
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
} __lf_gendelay_f9e5aa16_inp_t;
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
} __lf_gendelay_f9e5aa16_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __lf_gendelay_f9e5aa16_act_t;
typedef struct {
    struct self_base_t base;
    interval_t delay;
#line 144 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/__lf_gendelay_f9e5aa16.h"
#line 145 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/__lf_gendelay_f9e5aa16.h"
    __lf_gendelay_f9e5aa16_act_t _lf_act;
    __lf_gendelay_f9e5aa16_inp_t* _lf_inp;
    // width of -2 indicates that it is not a multiport.
    int _lf_inp_width;
    // Default input (in case it does not get connected)
    __lf_gendelay_f9e5aa16_inp_t _lf_default__inp;
    __lf_gendelay_f9e5aa16_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__act;
    reaction_t* _lf__act_reactions[1];
    trigger_t _lf__inp;
    reaction_t* _lf__inp_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __lf_gendelay_f9e5aa16_self_t;
__lf_gendelay_f9e5aa16_self_t* new___lf_gendelay_f9e5aa16();
#endif // __LF_GENDELAY_F9E5AA16_H
