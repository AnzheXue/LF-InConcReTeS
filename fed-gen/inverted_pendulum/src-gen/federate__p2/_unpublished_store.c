#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p2/unpublished_store.h"
#include "_unpublished_store.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _unpublished_storereaction_function_0(void* instance_args) {
    _unpublished_store_self_t* self = (_unpublished_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _unpublished_store_error_t* error = self->_lf_error;
    int error_width = self->_lf_error_width; SUPPRESS_UNUSED_WARNING(error_width);
    _unpublished_store_output_error_t* output_error = &self->_lf_output_error;
    _unpublished_store_sw_t* sw = &self->_lf_sw;
    #line 507 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    // stored_error = error -> value;
    tuple t;
    strncpy(t.key, "error", sizeof(t.key));
    t.value = error -> value;
    t.time = lf_time_physical_elapsed();
    lf_set(output_error, t);
    add_successful_writes(1);
    // lf_print("successful_writes: %d\n", successful_writes);
    lf_set(sw, successful_writes);
    // stored_error = t; // Store the value in state
    // lf_print("Stored error: %f\n", output_error->value.value);
#line 27 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_unpublished_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _unpublished_storereaction_function_1(void* instance_args) {
    _unpublished_store_self_t* self = (_unpublished_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _unpublished_store_integral_t* integral = self->_lf_integral;
    int integral_width = self->_lf_integral_width; SUPPRESS_UNUSED_WARNING(integral_width);
    _unpublished_store_output_integral_t* output_integral = &self->_lf_output_integral;
    _unpublished_store_sw_t* sw = &self->_lf_sw;
    #line 522 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    // stored_integral = integral -> value;
    tuple t;
    strncpy(t.key, "integral", sizeof(t.key));
    t.value = integral -> value;
    t.time = lf_time_physical_elapsed();
    lf_set(output_integral, t);
    add_successful_writes(1);
    // lf_print("successful_writes: %d\n", successful_writes);
    lf_set(sw, successful_writes);
    // stored_integral = t; // Store the value in state
    // lf_print("Stored integral: %f\n", output_integral->value.value);
#line 49 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_unpublished_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _unpublished_storereaction_function_2(void* instance_args) {
    _unpublished_store_self_t* self = (_unpublished_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _unpublished_store_global_target_t* global_target = self->_lf_global_target;
    int global_target_width = self->_lf_global_target_width; SUPPRESS_UNUSED_WARNING(global_target_width);
    _unpublished_store_output_target_t* output_target = &self->_lf_output_target;
    _unpublished_store_sw_t* sw = &self->_lf_sw;
    #line 582 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    // stored_target = global_target -> value;
    tuple t;
    strncpy(t.key, "target", sizeof(t.key));
    t.value = global_target->value;
    t.time = lf_time_physical_elapsed();
    lf_set(output_target, t);
    add_successful_writes(1);
    // lf_print("successful_writes: %d\n", successful_writes);
    lf_set(sw, successful_writes);
    // stored_target = t; // Store the value in state
    // lf_print("Stored target: %f\n", output_target->value.value);
#line 71 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_unpublished_store.c"
}
#include "include/api/reaction_macros_undef.h"
_unpublished_store_self_t* new__unpublished_store() {
    _unpublished_store_self_t* self = (_unpublished_store_self_t*)lf_new_reactor(sizeof(_unpublished_store_self_t));
    // Set input by default to an always absent default input.
    self->_lf_error = &self->_lf_default__error;
    // Set the default source reactor pointer
    self->_lf_default__error._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_integral = &self->_lf_default__integral;
    // Set the default source reactor pointer
    self->_lf_default__integral._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_global_target = &self->_lf_default__global_target;
    // Set the default source reactor pointer
    self->_lf_default__global_target._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _unpublished_storereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _unpublished_storereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _unpublished_storereaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__error.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__error.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__error_reactions[0] = &self->_lf__reaction_0;
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
    self->_lf__integral_reactions[0] = &self->_lf__reaction_1;
    self->_lf__integral.reactions = &self->_lf__integral_reactions[0];
    self->_lf__integral.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__integral.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__integral.tmplt.type.element_size = sizeof(double);
    self->_lf__global_target.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__global_target.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__global_target_reactions[0] = &self->_lf__reaction_2;
    self->_lf__global_target.reactions = &self->_lf__global_target_reactions[0];
    self->_lf__global_target.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__global_target.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__global_target.tmplt.type.element_size = sizeof(double);
    return self;
}
