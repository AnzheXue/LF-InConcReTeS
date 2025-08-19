#ifndef __lf_gendelay_8dec09f8_H
#define __lf_gendelay_8dec09f8_H
#ifndef __LF_GENDELAY_8DEC09F8_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_888378046_H
#define TOP_LEVEL_PREAMBLE_888378046_H
/*Correspondence: Range: [(16, 4), (16, 29)) -> Range: [(0, 0), (0, 25)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/src/EIGtree.lf)*/#include "common_types.h"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct _lf_gendelay_8dec09f8_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t delay;
    int end[0]; // placeholder; MSVC does not compile empty structs
} _lf_gendelay_8dec09f8_self_t;
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
} _lf_gendelay_8dec09f8_inp_t;
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
} _lf_gendelay_8dec09f8_out_t;
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
} _lf_gendelay_8dec09f8_act_t;
#endif
#endif
