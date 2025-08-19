#ifndef __lf_gendelay_c22f5369_H
#define __lf_gendelay_c22f5369_H
#ifndef __LF_GENDELAY_C22F5369_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1380259041_H
#define TOP_LEVEL_PREAMBLE_1380259041_H
/*Correspondence: Range: [(46, 0), (59, 6)) -> Range: [(0, 0), (13, 6)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf)*/#ifdef __cplusplus
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
/*Correspondence: Range: [(20, 0), (43, 21)) -> Range: [(0, 0), (23, 21)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf)*/typedef struct {
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
#define TIMESTEP 0.05
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct _lf_gendelay_c22f5369_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t delay;
    int end[0]; // placeholder; MSVC does not compile empty structs
} _lf_gendelay_c22f5369_self_t;
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
} _lf_gendelay_c22f5369_inp_t;
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
} _lf_gendelay_c22f5369_out_t;
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
} _lf_gendelay_c22f5369_act_t;
#endif
#endif
