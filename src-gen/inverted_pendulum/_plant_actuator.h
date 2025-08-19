#ifndef _PLANT_ACTUATOR_H
#define _PLANT_ACTUATOR_H
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
} _plant_actuator_a1_force_t;
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
} _plant_actuator_a2_force_t;
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
} _plant_actuator_a3_force_t;
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
} _plant_actuator_a4_force_t;
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
} _plant_actuator_sim_st_p1_t;
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
} _plant_actuator_sim_st_p2_t;
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
} _plant_actuator_sim_st_p3_t;
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
} _plant_actuator_sim_st_p4_t;
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
} _plant_actuator_CF_force_t;
typedef struct {
    struct self_base_t base;
#line 216 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.h"
    #line 1937 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    interval_t sim_start_time_p1;
    #line 1938 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    interval_t sim_start_time_p2;
    #line 1939 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    interval_t sim_start_time_p3;
    #line 1940 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    interval_t sim_start_time_p4;
#line 225 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.h"
    _plant_actuator_a1_force_t* _lf_a1_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a1_force_width;
    // Default input (in case it does not get connected)
    _plant_actuator_a1_force_t _lf_default__a1_force;
    _plant_actuator_a2_force_t* _lf_a2_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a2_force_width;
    // Default input (in case it does not get connected)
    _plant_actuator_a2_force_t _lf_default__a2_force;
    _plant_actuator_a3_force_t* _lf_a3_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a3_force_width;
    // Default input (in case it does not get connected)
    _plant_actuator_a3_force_t _lf_default__a3_force;
    _plant_actuator_a4_force_t* _lf_a4_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_a4_force_width;
    // Default input (in case it does not get connected)
    _plant_actuator_a4_force_t _lf_default__a4_force;
    _plant_actuator_sim_st_p1_t* _lf_sim_st_p1;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p1_width;
    // Default input (in case it does not get connected)
    _plant_actuator_sim_st_p1_t _lf_default__sim_st_p1;
    _plant_actuator_sim_st_p2_t* _lf_sim_st_p2;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p2_width;
    // Default input (in case it does not get connected)
    _plant_actuator_sim_st_p2_t _lf_default__sim_st_p2;
    _plant_actuator_sim_st_p3_t* _lf_sim_st_p3;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p3_width;
    // Default input (in case it does not get connected)
    _plant_actuator_sim_st_p3_t _lf_default__sim_st_p3;
    _plant_actuator_sim_st_p4_t* _lf_sim_st_p4;
    // width of -2 indicates that it is not a multiport.
    int _lf_sim_st_p4_width;
    // Default input (in case it does not get connected)
    _plant_actuator_sim_st_p4_t _lf_default__sim_st_p4;
    _plant_actuator_CF_force_t _lf_CF_force;
    int _lf_CF_force_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    trigger_t _lf__a1_force;
    reaction_t* _lf__a1_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a2_force;
    reaction_t* _lf__a2_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a3_force;
    reaction_t* _lf__a3_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__a4_force;
    reaction_t* _lf__a4_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p1;
    reaction_t* _lf__sim_st_p1_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p2;
    reaction_t* _lf__sim_st_p2_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p3;
    reaction_t* _lf__sim_st_p3_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sim_st_p4;
    reaction_t* _lf__sim_st_p4_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _plant_actuator_self_t;
_plant_actuator_self_t* new__plant_actuator();
#endif // _PLANT_ACTUATOR_H
