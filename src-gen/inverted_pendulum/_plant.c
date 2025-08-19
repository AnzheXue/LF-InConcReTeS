#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/plant.h"
#include "_plant.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_plant_self_t* new__plant() {
    _plant_self_t* self = (_plant_self_t*)lf_new_reactor(sizeof(_plant_self_t));
    // Set input by default to an always absent default input.
    self->_lf_a1_force = &self->_lf_default__a1_force;
    // Set the default source reactor pointer
    self->_lf_default__a1_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_a2_force = &self->_lf_default__a2_force;
    // Set the default source reactor pointer
    self->_lf_default__a2_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_a3_force = &self->_lf_default__a3_force;
    // Set the default source reactor pointer
    self->_lf_default__a3_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_a4_force = &self->_lf_default__a4_force;
    // Set the default source reactor pointer
    self->_lf_default__a4_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s1 = &self->_lf_default__request_s1;
    // Set the default source reactor pointer
    self->_lf_default__request_s1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s2 = &self->_lf_default__request_s2;
    // Set the default source reactor pointer
    self->_lf_default__request_s2._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s3 = &self->_lf_default__request_s3;
    // Set the default source reactor pointer
    self->_lf_default__request_s3._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s4 = &self->_lf_default__request_s4;
    // Set the default source reactor pointer
    self->_lf_default__request_s4._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sim_st_p1 = &self->_lf_default__sim_st_p1;
    // Set the default source reactor pointer
    self->_lf_default__sim_st_p1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sim_st_p2 = &self->_lf_default__sim_st_p2;
    // Set the default source reactor pointer
    self->_lf_default__sim_st_p2._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sim_st_p3 = &self->_lf_default__sim_st_p3;
    // Set the default source reactor pointer
    self->_lf_default__sim_st_p3._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sim_st_p4 = &self->_lf_default__sim_st_p4;
    // Set the default source reactor pointer
    self->_lf_default__sim_st_p4._base.source_reactor = (self_base_t*)self;
    self->_lf__a1_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a1_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a1_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a2_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a2_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a2_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a3_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a3_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a3_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a4_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a4_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a4_force.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s1.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s2.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s3.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s4.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s4.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s4.tmplt.type.element_size = sizeof(double);
    self->_lf__sim_st_p1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p1.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p2.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p3.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p4.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p4.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p4.tmplt.type.element_size = sizeof(interval_t);
    return self;
}
