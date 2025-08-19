#ifndef __lf_gendelay_6b5150b0_H
#define __lf_gendelay_6b5150b0_H
#ifndef __LF_GENDELAY_6B5150B0_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1671084561_H
#define TOP_LEVEL_PREAMBLE_1671084561_H
/*Correspondence: Range: [(8, 4), (8, 17)) -> Range: [(0, 0), (0, 13)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/src/EIGtree.lf)*/extern tuple;
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct _lf_gendelay_6b5150b0_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t delay;
    int end[0]; // placeholder; MSVC does not compile empty structs
} _lf_gendelay_6b5150b0_self_t;
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
} _lf_gendelay_6b5150b0_inp_t;
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
} _lf_gendelay_6b5150b0_out_t;
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
} _lf_gendelay_6b5150b0_act_t;
#endif
#endif
