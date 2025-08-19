#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/pi3.h"
#include "_pi3.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _pi3reaction_function_0(void* instance_args) {
    _pi3_self_t* self = (_pi3_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _pi3_sim_start_time_t* sim_start_time = self->_lf_sim_start_time;
    int sim_start_time_width = self->_lf_sim_start_time_width; SUPPRESS_UNUSED_WARNING(sim_start_time_width);
    _pi3_sim_st_t* sim_st = &self->_lf_sim_st;
    #line 1444 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    // lf_print("Simulation start time: %lld\n", sim_start_time->value);
    lf_set(sim_st, sim_start_time->value);
#line 17 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_pi3.c"
}
#include "include/api/reaction_macros_undef.h"
_pi3_self_t* new__pi3() {
    _pi3_self_t* self = (_pi3_self_t*)lf_new_reactor(sizeof(_pi3_self_t));
    // Set input by default to an always absent default input.
    self->_lf_AP_in = &self->_lf_default__AP_in;
    // Set the default source reactor pointer
    self->_lf_default__AP_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_AV_in = &self->_lf_default__AV_in;
    // Set the default source reactor pointer
    self->_lf_default__AV_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_CP_in = &self->_lf_default__CP_in;
    // Set the default source reactor pointer
    self->_lf_default__CP_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_CV_in = &self->_lf_default__CV_in;
    // Set the default source reactor pointer
    self->_lf_default__CV_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p1_in = &self->_lf_default__e1_p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p2_in = &self->_lf_default__e1_p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p3_in = &self->_lf_default__e1_p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p1p2_in = &self->_lf_default__e1_p1p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p1p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p1p3_in = &self->_lf_default__e1_p1p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p1p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p2p1_in = &self->_lf_default__e1_p2p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p2p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p2p3_in = &self->_lf_default__e1_p2p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p2p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p3p1_in = &self->_lf_default__e1_p3p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p3p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e1_p3p2_in = &self->_lf_default__e1_p3p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e1_p3p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p1_in = &self->_lf_default__e2_p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p2_in = &self->_lf_default__e2_p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p3_in = &self->_lf_default__e2_p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p1p2_in = &self->_lf_default__e2_p1p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p1p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p1p3_in = &self->_lf_default__e2_p1p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p1p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p2p1_in = &self->_lf_default__e2_p2p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p2p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p2p3_in = &self->_lf_default__e2_p2p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p2p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p3p1_in = &self->_lf_default__e2_p3p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p3p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e2_p3p2_in = &self->_lf_default__e2_p3p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e2_p3p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p1_in = &self->_lf_default__e3_p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p2_in = &self->_lf_default__e3_p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p3_in = &self->_lf_default__e3_p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p1p2_in = &self->_lf_default__e3_p1p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p1p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p1p3_in = &self->_lf_default__e3_p1p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p1p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p2p1_in = &self->_lf_default__e3_p2p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p2p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p2p3_in = &self->_lf_default__e3_p2p3_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p2p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p3p1_in = &self->_lf_default__e3_p3p1_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p3p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_e3_p3p2_in = &self->_lf_default__e3_p3p2_in;
    // Set the default source reactor pointer
    self->_lf_default__e3_p3p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sim_start_time = &self->_lf_default__sim_start_time;
    // Set the default source reactor pointer
    self->_lf_default__sim_start_time._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _pi3reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__AP_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__AP_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AP_in.tmplt.type.element_size = sizeof(double);
    self->_lf__AV_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__AV_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AV_in.tmplt.type.element_size = sizeof(double);
    self->_lf__CP_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__CP_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__CP_in.tmplt.type.element_size = sizeof(double);
    self->_lf__CV_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__CV_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__CV_in.tmplt.type.element_size = sizeof(double);
    self->_lf__e1_p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e1_p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e1_p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e1_p3p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e2_p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e2_p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e2_p3p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__e3_p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__e3_p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__e3_p3p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__sim_start_time.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_start_time.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_start_time_reactions[0] = &self->_lf__reaction_0;
    self->_lf__sim_start_time.reactions = &self->_lf__sim_start_time_reactions[0];
    self->_lf__sim_start_time.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sim_start_time.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sim_start_time.tmplt.type.element_size = sizeof(interval_t);
    return self;
}
