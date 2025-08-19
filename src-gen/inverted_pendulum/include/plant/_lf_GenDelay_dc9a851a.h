#ifndef __lf_gendelay_dc9a851a_H
#define __lf_gendelay_dc9a851a_H
#ifndef __LF_GENDELAY_DC9A851A_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_80052821_H
#define TOP_LEVEL_PREAMBLE_80052821_H
/*Correspondence: Range: [(3, 4), (6, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/src/plant.lf)*/#include <string.h>
#include <math.h>

#define sqr(x) ((x)*(x))
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct _lf_gendelay_dc9a851a_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t delay;
    int end[0]; // placeholder; MSVC does not compile empty structs
} _lf_gendelay_dc9a851a_self_t;
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
} _lf_gendelay_dc9a851a_inp_t;
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
} _lf_gendelay_dc9a851a_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    double value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lf_gendelay_dc9a851a_act_t;
#endif
#endif
