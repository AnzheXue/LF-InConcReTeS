#ifndef _ACTUATOR_H
#define _ACTUATOR_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1869219801_H
#define TOP_LEVEL_PREAMBLE_1869219801_H
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

#include <string.h>
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
} _actuator_p1_force_t;
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
} _actuator_p2_force_t;
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
} _actuator_p3_force_t;
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
} _actuator_p4_force_t;
typedef struct {
    struct self_base_t base;
#line 93 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__a/_actuator.h"
    #line 60 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__a.lf"
    double force;
#line 96 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__a/_actuator.h"
    _actuator_p1_force_t* _lf_p1_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_p1_force_width;
    // Default input (in case it does not get connected)
    _actuator_p1_force_t _lf_default__p1_force;
    _actuator_p2_force_t* _lf_p2_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_p2_force_width;
    // Default input (in case it does not get connected)
    _actuator_p2_force_t _lf_default__p2_force;
    _actuator_p3_force_t* _lf_p3_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_p3_force_width;
    // Default input (in case it does not get connected)
    _actuator_p3_force_t _lf_default__p3_force;
    _actuator_p4_force_t* _lf_p4_force;
    // width of -2 indicates that it is not a multiport.
    int _lf_p4_force_width;
    // Default input (in case it does not get connected)
    _actuator_p4_force_t _lf_default__p4_force;
    reaction_t _lf__reaction_0;
    trigger_t _lf__p1_force;
    reaction_t* _lf__p1_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p2_force;
    reaction_t* _lf__p2_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p3_force;
    reaction_t* _lf__p3_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__p4_force;
    reaction_t* _lf__p4_force_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _actuator_self_t;
_actuator_self_t* new__actuator();
#endif // _ACTUATOR_H
