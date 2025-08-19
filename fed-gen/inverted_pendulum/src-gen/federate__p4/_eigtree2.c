#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p4/EIGtree2.h"
#include "_eigtree2.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_0(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p1p2_in_t* p1p2_in = self->_lf_p1p2_in;
    int p1p2_in_width = self->_lf_p1p2_in_width; SUPPRESS_UNUSED_WARNING(p1p2_in_width);
    _eigtree2_p0p1p2_out_t* p0p1p2_out = &self->_lf_p0p1p2_out;
    #line 821 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p1p2_out, p1p2_in->value);
    // lf_print("EIGtree2 received p1p2: %f\n", p1p2_in->value.value);
#line 17 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_1(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p1p3_in_t* p1p3_in = self->_lf_p1p3_in;
    int p1p3_in_width = self->_lf_p1p3_in_width; SUPPRESS_UNUSED_WARNING(p1p3_in_width);
    _eigtree2_p0p1p3_out_t* p0p1p3_out = &self->_lf_p0p1p3_out;
    #line 827 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p1p3_out, p1p3_in->value);
    // lf_print("EIGtree2 received p1p3: %f\n", p1p3_in->value.value);
#line 29 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_2(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p2p1_in_t* p2p1_in = self->_lf_p2p1_in;
    int p2p1_in_width = self->_lf_p2p1_in_width; SUPPRESS_UNUSED_WARNING(p2p1_in_width);
    _eigtree2_p0p2p1_out_t* p0p2p1_out = &self->_lf_p0p2p1_out;
    #line 833 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p2p1_out, p2p1_in->value);
    // lf_print("EIGtree2 received p2p1: %f\n", p2p1_in->value.value);
#line 41 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_3(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p2p3_in_t* p2p3_in = self->_lf_p2p3_in;
    int p2p3_in_width = self->_lf_p2p3_in_width; SUPPRESS_UNUSED_WARNING(p2p3_in_width);
    _eigtree2_p0p2p3_out_t* p0p2p3_out = &self->_lf_p0p2p3_out;
    #line 839 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p2p3_out, p2p3_in->value);
    // lf_print("EIGtree2 received p2p3: %f\n", p2p3_in->value.value);
#line 53 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_4(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p3p1_in_t* p3p1_in = self->_lf_p3p1_in;
    int p3p1_in_width = self->_lf_p3p1_in_width; SUPPRESS_UNUSED_WARNING(p3p1_in_width);
    _eigtree2_p0p3p1_out_t* p0p3p1_out = &self->_lf_p0p3p1_out;
    #line 845 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p3p1_out, p3p1_in->value);
    // lf_print("EIGtree2 received p3p1: %f\n", p3p1_in->value.value);
#line 65 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtree2reaction_function_5(void* instance_args) {
    _eigtree2_self_t* self = (_eigtree2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree2_p3p2_in_t* p3p2_in = self->_lf_p3p2_in;
    int p3p2_in_width = self->_lf_p3p2_in_width; SUPPRESS_UNUSED_WARNING(p3p2_in_width);
    _eigtree2_p0p3p2_out_t* p0p3p2_out = &self->_lf_p0p3p2_out;
    #line 851 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p4.lf"
    lf_set(p0p3p2_out, p3p2_in->value);
    // lf_print("EIGtree2 received p3p2: %f\n", p3p2_in->value.value);
#line 77 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p4/_eigtree2.c"
}
#include "include/api/reaction_macros_undef.h"
_eigtree2_self_t* new__eigtree2() {
    _eigtree2_self_t* self = (_eigtree2_self_t*)lf_new_reactor(sizeof(_eigtree2_self_t));
    // Set input by default to an always absent default input.
    self->_lf_p1p2_in = &self->_lf_default__p1p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p1p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p1p3_in = &self->_lf_default__p1p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p1p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p2p1_in = &self->_lf_default__p2p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p2p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p2p3_in = &self->_lf_default__p2p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p2p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p3p1_in = &self->_lf_default__p3p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p3p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p3p2_in = &self->_lf_default__p3p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p3p2_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _eigtree2reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _eigtree2reaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _eigtree2reaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _eigtree2reaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _eigtree2reaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _eigtree2reaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
    self->_lf__p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1p2_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p1p2_in.reactions = &self->_lf__p1p2_in_reactions[0];
    self->_lf__p1p2_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p1p2_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1p3_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__p1p3_in.reactions = &self->_lf__p1p3_in_reactions[0];
    self->_lf__p1p3_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p1p3_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2p1_in_reactions[0] = &self->_lf__reaction_2;
    self->_lf__p2p1_in.reactions = &self->_lf__p2p1_in_reactions[0];
    self->_lf__p2p1_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p2p1_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2p3_in_reactions[0] = &self->_lf__reaction_3;
    self->_lf__p2p3_in.reactions = &self->_lf__p2p3_in_reactions[0];
    self->_lf__p2p3_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p2p3_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3p1_in_reactions[0] = &self->_lf__reaction_4;
    self->_lf__p3p1_in.reactions = &self->_lf__p3p1_in_reactions[0];
    self->_lf__p3p1_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p3p1_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3p2_in_reactions[0] = &self->_lf__reaction_5;
    self->_lf__p3p2_in.reactions = &self->_lf__p3p2_in_reactions[0];
    self->_lf__p3p2_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p3p2_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p3p2_in.tmplt.type.element_size = sizeof(tuple);
    return self;
}
