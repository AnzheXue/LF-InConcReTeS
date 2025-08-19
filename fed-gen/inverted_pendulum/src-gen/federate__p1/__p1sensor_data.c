#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p1/_p1sensor_data.h"
#include "__p1sensor_data.h"
// ***** Start of method declarations.
// ***** End of method declarations.
__p1sensor_data_self_t* new___p1sensor_data() {
    __p1sensor_data_self_t* self = (__p1sensor_data_self_t*)lf_new_reactor(sizeof(__p1sensor_data_self_t));
    // Set input by default to an always absent default input.
    self->_lf_port0 = &self->_lf_default__port0;
    // Set the default source reactor pointer
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port1 = &self->_lf_default__port1;
    // Set the default source reactor pointer
    self->_lf_default__port1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port2 = &self->_lf_default__port2;
    // Set the default source reactor pointer
    self->_lf_default__port2._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port3 = &self->_lf_default__port3;
    // Set the default source reactor pointer
    self->_lf_default__port3._base.source_reactor = (self_base_t*)self;
    self->_lf__port0.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(double);
    self->_lf__port1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port1.tmplt.type.element_size = sizeof(double);
    self->_lf__port2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port2.tmplt.type.element_size = sizeof(double);
    self->_lf__port3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port3.tmplt.type.element_size = sizeof(double);
    return self;
}
