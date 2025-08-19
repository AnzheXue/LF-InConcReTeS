#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p1/writer.h"
#include "_writer.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _writerreaction_function_0(void* instance_args) {
    _writer_self_t* self = (_writer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _writer_global_target_t* global_target = self->_lf_global_target;
    int global_target_width = self->_lf_global_target_width; SUPPRESS_UNUSED_WARNING(global_target_width);
    _writer_output_target_t* output_target = &self->_lf_output_target;
    _writer_tw_t* tw = &self->_lf_tw;
    #line 375 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    lf_set(output_target, global_target->value);
    add_total_writes(1);
    // lf_print("total_writes: %d\n", total_writes);
    lf_set(tw, total_writes);
    // lf_print("Write global target: %f\n", global_target->value);
#line 21 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_writer.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _writerreaction_function_1(void* instance_args) {
    _writer_self_t* self = (_writer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _writer_error_t* error = self->_lf_error;
    int error_width = self->_lf_error_width; SUPPRESS_UNUSED_WARNING(error_width);
    _writer_output_error_t* output_error = &self->_lf_output_error;
    _writer_tw_t* tw = &self->_lf_tw;
    #line 384 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    lf_set(output_error, error->value);
    add_total_writes(1);
    // lf_print("total_writes: %d\n", total_writes);
    lf_set(tw, total_writes);
    // lf_print("Write error: %f\n", error->value);
#line 37 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_writer.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _writerreaction_function_2(void* instance_args) {
    _writer_self_t* self = (_writer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _writer_integral_t* integral = self->_lf_integral;
    int integral_width = self->_lf_integral_width; SUPPRESS_UNUSED_WARNING(integral_width);
    _writer_output_integral_t* output_integral = &self->_lf_output_integral;
    _writer_tw_t* tw = &self->_lf_tw;
    #line 393 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    lf_set(output_integral, integral->value);
    add_total_writes(1);
    // lf_print("total_writes: %d\n", total_writes);
    lf_set(tw, total_writes);
    // lf_print("Write integral: %f\n", integral->value);
#line 53 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_writer.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _writerreaction_function_3(void* instance_args) {
    _writer_self_t* self = (_writer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _writer_force_t* force = self->_lf_force;
    int force_width = self->_lf_force_width; SUPPRESS_UNUSED_WARNING(force_width);
    _writer_output_force_t* output_force = &self->_lf_output_force;
    #line 414 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    lf_set(output_force, force->value);
    // lf_print("Write force: %f\n", force->value);
#line 65 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_writer.c"
}
#include "include/api/reaction_macros_undef.h"
_writer_self_t* new__writer() {
    _writer_self_t* self = (_writer_self_t*)lf_new_reactor(sizeof(_writer_self_t));
    // Set input by default to an always absent default input.
    self->_lf_error = &self->_lf_default__error;
    // Set the default source reactor pointer
    self->_lf_default__error._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_integral = &self->_lf_default__integral;
    // Set the default source reactor pointer
    self->_lf_default__integral._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_force = &self->_lf_default__force;
    // Set the default source reactor pointer
    self->_lf_default__force._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_global_target = &self->_lf_default__global_target;
    // Set the default source reactor pointer
    self->_lf_default__global_target._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _writerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _writerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _writerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _writerreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__error.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__error.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__error_reactions[0] = &self->_lf__reaction_1;
    self->_lf__error.reactions = &self->_lf__error_reactions[0];
    self->_lf__error.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__error.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__error.tmplt.type.element_size = sizeof(double);
    self->_lf__integral.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__integral.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__integral_reactions[0] = &self->_lf__reaction_2;
    self->_lf__integral.reactions = &self->_lf__integral_reactions[0];
    self->_lf__integral.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__integral.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__integral.tmplt.type.element_size = sizeof(double);
    self->_lf__force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__force_reactions[0] = &self->_lf__reaction_3;
    self->_lf__force.reactions = &self->_lf__force_reactions[0];
    self->_lf__force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__force.tmplt.type.element_size = sizeof(double);
    self->_lf__global_target.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__global_target.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__global_target_reactions[0] = &self->_lf__reaction_0;
    self->_lf__global_target.reactions = &self->_lf__global_target_reactions[0];
    self->_lf__global_target.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__global_target.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__global_target.tmplt.type.element_size = sizeof(double);
    return self;
}
