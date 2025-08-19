#ifndef __P4SENSOR_DATA_H
#define __P4SENSOR_DATA_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_868546363_H
#define TOP_LEVEL_PREAMBLE_868546363_H
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

#include <string.h>
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
} __p4sensor_data_port0_t;
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
} __p4sensor_data_port1_t;
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
} __p4sensor_data_port2_t;
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
} __p4sensor_data_port3_t;
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
} __p4sensor_data_port_t;
typedef struct {
    struct self_base_t base;
#line 107 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/__p4sensor_data.h"
#line 108 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/__p4sensor_data.h"
    __p4sensor_data_port0_t* _lf_port0;
    // width of -2 indicates that it is not a multiport.
    int _lf_port0_width;
    // Default input (in case it does not get connected)
    __p4sensor_data_port0_t _lf_default__port0;
    __p4sensor_data_port1_t* _lf_port1;
    // width of -2 indicates that it is not a multiport.
    int _lf_port1_width;
    // Default input (in case it does not get connected)
    __p4sensor_data_port1_t _lf_default__port1;
    __p4sensor_data_port2_t* _lf_port2;
    // width of -2 indicates that it is not a multiport.
    int _lf_port2_width;
    // Default input (in case it does not get connected)
    __p4sensor_data_port2_t _lf_default__port2;
    __p4sensor_data_port3_t* _lf_port3;
    // width of -2 indicates that it is not a multiport.
    int _lf_port3_width;
    // Default input (in case it does not get connected)
    __p4sensor_data_port3_t _lf_default__port3;
    // Array of output ports.
    __p4sensor_data_port_t* _lf_port;
    int _lf_port_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    __p4sensor_data_port_t** _lf_port_pointers;
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port3;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __p4sensor_data_self_t;
__p4sensor_data_self_t* new___p4sensor_data();
#endif // __P4SENSOR_DATA_H
