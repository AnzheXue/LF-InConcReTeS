#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__a/actuator.h"
#include "_actuator.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _actuatorreaction_function_0(void* instance_args) {
    _actuator_self_t* self = (_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _actuator_p1_force_t* p1_force = self->_lf_p1_force;
    int p1_force_width = self->_lf_p1_force_width; SUPPRESS_UNUSED_WARNING(p1_force_width);
    _actuator_p2_force_t* p2_force = self->_lf_p2_force;
    int p2_force_width = self->_lf_p2_force_width; SUPPRESS_UNUSED_WARNING(p2_force_width);
    _actuator_p3_force_t* p3_force = self->_lf_p3_force;
    int p3_force_width = self->_lf_p3_force_width; SUPPRESS_UNUSED_WARNING(p3_force_width);
    _actuator_p4_force_t* p4_force = self->_lf_p4_force;
    int p4_force_width = self->_lf_p4_force_width; SUPPRESS_UNUSED_WARNING(p4_force_width);
    #line 67 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__a.lf"
    if (p1_force -> is_present) {
        self->force = p1_force -> value;
        lf_print("Actuator received p1_force: %f\n", p1_force->value);
    } else if (p2_force -> is_present) {
        self->force = p2_force -> value;
        lf_print("Actuator received p2_force: %f\n", p2_force->value);
    } else if (p3_force -> is_present) {
        self->force = p3_force -> value;
        lf_print("Actuator received p3_force: %f\n", p3_force->value);
    } else if (p4_force -> is_present) {
        self->force = p4_force -> value;
        lf_print("Actuator received p4_force: %f\n", p4_force->value);
    }
#line 33 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__a/_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
_actuator_self_t* new__actuator() {
    _actuator_self_t* self = (_actuator_self_t*)lf_new_reactor(sizeof(_actuator_self_t));
    // Set input by default to an always absent default input.
    self->_lf_p1_force = &self->_lf_default__p1_force;
    // Set the default source reactor pointer
    self->_lf_default__p1_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p2_force = &self->_lf_default__p2_force;
    // Set the default source reactor pointer
    self->_lf_default__p2_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p3_force = &self->_lf_default__p3_force;
    // Set the default source reactor pointer
    self->_lf_default__p3_force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p4_force = &self->_lf_default__p4_force;
    // Set the default source reactor pointer
    self->_lf_default__p4_force._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _actuatorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__p1_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1_force_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p1_force.reactions = &self->_lf__p1_force_reactions[0];
    self->_lf__p1_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p1_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p1_force.tmplt.type.element_size = sizeof(double);
    self->_lf__p2_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2_force_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p2_force.reactions = &self->_lf__p2_force_reactions[0];
    self->_lf__p2_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p2_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p2_force.tmplt.type.element_size = sizeof(double);
    self->_lf__p3_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3_force_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p3_force.reactions = &self->_lf__p3_force_reactions[0];
    self->_lf__p3_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p3_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p3_force.tmplt.type.element_size = sizeof(double);
    self->_lf__p4_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p4_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p4_force_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p4_force.reactions = &self->_lf__p4_force_reactions[0];
    self->_lf__p4_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p4_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p4_force.tmplt.type.element_size = sizeof(double);
    return self;
}
