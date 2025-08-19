#ifndef _NETWORKRECEIVER_88_H
#define _NETWORKRECEIVER_88_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_839027763_H
#define TOP_LEVEL_PREAMBLE_839027763_H
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
    tuple value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _networkreceiver_88_msg_t;
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
} _networkreceiver_88_networkMessage_t;
typedef struct {
    struct self_base_t base;
#line 68 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_networkreceiver_88.h"
#line 69 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_networkreceiver_88.h"
    _networkreceiver_88_networkMessage_t _lf_networkMessage;
    _networkreceiver_88_msg_t _lf_msg;
    int _lf_msg_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__networkMessage;
    reaction_t* _lf__networkMessage_reactions[1];
} _networkreceiver_88_self_t;
_networkreceiver_88_self_t* new__networkreceiver_88();
#endif // _NETWORKRECEIVER_88_H
