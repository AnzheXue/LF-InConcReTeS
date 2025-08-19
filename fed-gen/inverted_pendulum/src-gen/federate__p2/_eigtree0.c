#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p2/EIGtree0.h"
#include "_eigtree0.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _eigtree0reaction_function_0(void* instance_args) {
    _eigtree0_self_t* self = (_eigtree0_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree0_store_in_t* store_in = self->_lf_store_in;
    int store_in_width = self->_lf_store_in_width; SUPPRESS_UNUSED_WARNING(store_in_width);
    _eigtree0_round0_out_t* round0_out = &self->_lf_round0_out;
    #line 773 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p2.lf"
    lf_set(round0_out, store_in->value);
    // lf_print("EIGtree0 received: %f\n", store_in->value.value);
#line 17 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p2/_eigtree0.c"
}
#include "include/api/reaction_macros_undef.h"
_eigtree0_self_t* new__eigtree0() {
    _eigtree0_self_t* self = (_eigtree0_self_t*)lf_new_reactor(sizeof(_eigtree0_self_t));
    // Set input by default to an always absent default input.
    self->_lf_store_in = &self->_lf_default__store_in;
    // Set the default source reactor pointer
    self->_lf_default__store_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _eigtree0reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__store_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__store_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__store_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__store_in.reactions = &self->_lf__store_in_reactions[0];
    self->_lf__store_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__store_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__store_in.tmplt.type.element_size = sizeof(tuple);
    return self;
}
