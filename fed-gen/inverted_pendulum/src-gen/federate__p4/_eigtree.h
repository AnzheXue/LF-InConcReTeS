#ifndef _EIGTREE_H
#define _EIGTREE_H
#include "include/core/reactor.h"
#include "__lf_gendelay_dc467e62.h"
#include "__lf_gendelay_c84ce560.h"
#include "__lf_gendelay_25fba9d4.h"
#include "__lf_gendelay_da17a854.h"
#include "__lf_gendelay_7342ad4.h"
#include "_eigtree1.h"
#include "_eigtree0.h"
#include "__lf_gendelay_b15ac454.h"
#include "__lf_gendelay_2a1d55d4.h"
#include "__lf_gendelay_ebab3714.h"
#include "__lf_gendelay_7bd51054.h"
#include "__lf_gendelay_df71931e.h"
#include "__lf_gendelay_85bf3c94.h"
#include "__lf_gendelay_f075f5d4.h"
#include "_eigtree2.h"
#include "__lf_gendelay_512b1834.h"
#include "__lf_gendelay_cf51c74.h"
#include "__lf_gendelay_ce82fdb4.h"
#include "_eigtreereduction.h"
#include "__lf_gendelay_47458f34.h"
#include "__lf_gendelay_8d37074.h"
#include "__lf_gendelay_bcef6ef4.h"
#include "__lf_gendelay_9fc73594.h"
#include "__lf_gendelay_94328af4.h"
#include "__lf_gendelay_245c6434.h"
#include "__lf_gendelay_d6ce24eb.h"
#include "__lf_gendelay_b12837a2.h"
#include "__lf_gendelay_5eacd6f4.h"
#include "__lf_gendelay_41849d94.h"
#ifndef TOP_LEVEL_PREAMBLE_1309783776_H
#define TOP_LEVEL_PREAMBLE_1309783776_H
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
#define TIMESTEP 0.05
#define TIME_PERIOD 800
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
} _eigtree_store_in_t;
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
} _eigtree_p1_in_t;
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
} _eigtree_p2_in_t;
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
} _eigtree_p3_in_t;
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
} _eigtree_p1p2_in_t;
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
} _eigtree_p1p3_in_t;
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
} _eigtree_p2p1_in_t;
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
} _eigtree_p2p3_in_t;
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
} _eigtree_p3p1_in_t;
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
} _eigtree_p3p2_in_t;
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
} _eigtree_sr_t;
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
} _eigtree_tr_t;
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
} _eigtree_sw_t;
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
} _eigtree_tw_t;
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
} _eigtree_round0_out_t;
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
} _eigtree_p0p1_out_t;
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
} _eigtree_p0p2_out_t;
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
} _eigtree_p0p3_out_t;
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
} _eigtree_final_out_t;
typedef struct {
    struct self_base_t base;
#line 412 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree.h"
    #line 1039 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    interval_t start_time;
    #line 1040 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    interval_t end_time;
    #line 1042 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    interval_t logical_start_time;
    #line 1043 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    interval_t logical_end_time;
    #line 1045 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    int successful_reads;
    #line 1046 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    int total_reads;
    #line 1047 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    int successful_writes;
    #line 1048 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src/federate__p4.lf"
    int total_writes;
#line 429 "/mnt/c/Users/32739/lf/lf-inconcretes/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree.h"
    _eigtree_store_in_t* _lf_store_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_store_in_width;
    // Default input (in case it does not get connected)
    _eigtree_store_in_t _lf_default__store_in;
    _eigtree_p1_in_t* _lf_p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p1_in_t _lf_default__p1_in;
    _eigtree_p2_in_t* _lf_p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p2_in_t _lf_default__p2_in;
    _eigtree_p3_in_t* _lf_p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p3_in_t _lf_default__p3_in;
    _eigtree_p1p2_in_t* _lf_p1p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p1p2_in_t _lf_default__p1p2_in;
    _eigtree_p1p3_in_t* _lf_p1p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p1p3_in_t _lf_default__p1p3_in;
    _eigtree_p2p1_in_t* _lf_p2p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p2p1_in_t _lf_default__p2p1_in;
    _eigtree_p2p3_in_t* _lf_p2p3_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2p3_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p2p3_in_t _lf_default__p2p3_in;
    _eigtree_p3p1_in_t* _lf_p3p1_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3p1_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p3p1_in_t _lf_default__p3p1_in;
    _eigtree_p3p2_in_t* _lf_p3p2_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3p2_in_width;
    // Default input (in case it does not get connected)
    _eigtree_p3p2_in_t _lf_default__p3p2_in;
    _eigtree_sr_t* _lf_sr;
    // width of -2 indicates that it is not a multiport.
    int _lf_sr_width;
    // Default input (in case it does not get connected)
    _eigtree_sr_t _lf_default__sr;
    _eigtree_tr_t* _lf_tr;
    // width of -2 indicates that it is not a multiport.
    int _lf_tr_width;
    // Default input (in case it does not get connected)
    _eigtree_tr_t _lf_default__tr;
    _eigtree_sw_t* _lf_sw;
    // width of -2 indicates that it is not a multiport.
    int _lf_sw_width;
    // Default input (in case it does not get connected)
    _eigtree_sw_t _lf_default__sw;
    _eigtree_tw_t* _lf_tw;
    // width of -2 indicates that it is not a multiport.
    int _lf_tw_width;
    // Default input (in case it does not get connected)
    _eigtree_tw_t _lf_default__tw;
    _eigtree_round0_out_t _lf_round0_out;
    int _lf_round0_out_width;
    _eigtree_p0p1_out_t _lf_p0p1_out;
    int _lf_p0p1_out_width;
    _eigtree_p0p2_out_t _lf_p0p2_out;
    int _lf_p0p2_out_width;
    _eigtree_p0p3_out_t _lf_p0p3_out;
    int _lf_p0p3_out_width;
    _eigtree_final_out_t _lf_final_out;
    int _lf_final_out_width;
    struct {
        _eigtreereduction_final_out_t* final_out;
        trigger_t final_out_trigger;
        reaction_t* final_out_reactions[1];
    } _lf_etr;
    int _lf_etr_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    trigger_t _lf__store_in;
    reaction_t* _lf__store_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p1p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p1p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2p3_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3p1_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3p2_in;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sr;
    reaction_t* _lf__sr_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__tr;
    reaction_t* _lf__tr_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__sw;
    reaction_t* _lf__sw_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__tw;
    reaction_t* _lf__tw_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _eigtree_self_t;
_eigtree_self_t* new__eigtree();
#endif // _EIGTREE_H
