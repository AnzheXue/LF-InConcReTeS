#ifndef _actuator_H
#define _actuator_H
#ifndef _ACTUATOR_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1869219801_H
#define TOP_LEVEL_PREAMBLE_1869219801_H
/*Correspondence: Range: [(20, 0), (32, 19)) -> Range: [(0, 0), (12, 19)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__a.lf)*/typedef struct {
    char key[32 + 1];
    double value;
    uint64_t time;
} tuple;

typedef struct {
    double value;
    int count;
    int first_index;
} tally;

#include <string.h>
/*Correspondence: Range: [(35, 0), (48, 6)) -> Range: [(0, 0), (13, 6)) (verbatim=true; src=/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__a.lf)*/#ifdef __cplusplus
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
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct actuator_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    double force;
    int end[0]; // placeholder; MSVC does not compile empty structs
} actuator_self_t;
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
} actuator_p1_force_t;
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
} actuator_p2_force_t;
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
} actuator_p3_force_t;
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
} actuator_p4_force_t;
#endif
#endif
