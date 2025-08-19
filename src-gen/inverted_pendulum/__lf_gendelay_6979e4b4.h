#ifndef __LF_GENDELAY_6979E4B4_H
#define __LF_GENDELAY_6979E4B4_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1793580716_H
#define TOP_LEVEL_PREAMBLE_1793580716_H
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

#define sqr(x) ((x)*(x))
#define MAX_VERSIONS 20
#define PUBLISHING_INTERVAL 10000000
#endif
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
} __lf_gendelay_6979e4b4_inp_t;
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
} __lf_gendelay_6979e4b4_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    interval_t value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __lf_gendelay_6979e4b4_act_t;
typedef struct {
    struct self_base_t base;
    interval_t delay;
#line 79 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/__lf_gendelay_6979e4b4.h"
#line 80 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/__lf_gendelay_6979e4b4.h"
    __lf_gendelay_6979e4b4_act_t _lf_act;
    __lf_gendelay_6979e4b4_inp_t* _lf_inp;
    // width of -2 indicates that it is not a multiport.
    int _lf_inp_width;
    // Default input (in case it does not get connected)
    __lf_gendelay_6979e4b4_inp_t _lf_default__inp;
    __lf_gendelay_6979e4b4_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__act;
    reaction_t* _lf__act_reactions[1];
    trigger_t _lf__inp;
    reaction_t* _lf__inp_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __lf_gendelay_6979e4b4_self_t;
__lf_gendelay_6979e4b4_self_t* new___lf_gendelay_6979e4b4();
#endif // __LF_GENDELAY_6979E4B4_H
