#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/actuator.h"
#include "_actuator.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _actuatorreaction_function_0(void* instance_args) {
    _actuator_self_t* self = (_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _actuator_input_force_t* input_force = self->_lf_input_force;
    int input_force_width = self->_lf_input_force_width; SUPPRESS_UNUSED_WARNING(input_force_width);
    _actuator_output_force_t* output_force = &self->_lf_output_force;
    #line 366 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(output_force, input_force->value);
    // lf_print("output_force: %f\n", output_force->value);
#line 17 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
_actuator_self_t* new__actuator() {
    _actuator_self_t* self = (_actuator_self_t*)lf_new_reactor(sizeof(_actuator_self_t));
    // Set input by default to an always absent default input.
    self->_lf_input_force = &self->_lf_default__input_force;
    // Set the default source reactor pointer
    self->_lf_default__input_force._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _actuatorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__input_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_force_reactions[0] = &self->_lf__reaction_0;
    self->_lf__input_force.reactions = &self->_lf__input_force_reactions[0];
    self->_lf__input_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__input_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__input_force.tmplt.type.element_size = sizeof(double);
    return self;
}
