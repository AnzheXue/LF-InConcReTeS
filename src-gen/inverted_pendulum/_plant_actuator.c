#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/plant_actuator.h"
#include "_plant_actuator.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _plant_actuatorreaction_function_0(void* instance_args) {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_actuator_sim_st_p1_t* sim_st_p1 = self->_lf_sim_st_p1;
    int sim_st_p1_width = self->_lf_sim_st_p1_width; SUPPRESS_UNUSED_WARNING(sim_st_p1_width);
    #line 1943 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    self->sim_start_time_p1 = sim_st_p1->value;
    // lf_print("Plant start time: %lld\n", self->sim_start_time);
#line 16 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _plant_actuatorreaction_function_1(void* instance_args) {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_actuator_sim_st_p2_t* sim_st_p2 = self->_lf_sim_st_p2;
    int sim_st_p2_width = self->_lf_sim_st_p2_width; SUPPRESS_UNUSED_WARNING(sim_st_p2_width);
    #line 1948 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    self->sim_start_time_p2 = sim_st_p2->value;
    // lf_print("Plant start time: %lld\n", self->sim_start_time);
#line 27 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _plant_actuatorreaction_function_2(void* instance_args) {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_actuator_sim_st_p3_t* sim_st_p3 = self->_lf_sim_st_p3;
    int sim_st_p3_width = self->_lf_sim_st_p3_width; SUPPRESS_UNUSED_WARNING(sim_st_p3_width);
    #line 1953 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    self->sim_start_time_p3 = sim_st_p3->value;
    // lf_print("Plant start time: %lld\n", self->sim_start_time);
#line 38 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _plant_actuatorreaction_function_3(void* instance_args) {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_actuator_sim_st_p4_t* sim_st_p4 = self->_lf_sim_st_p4;
    int sim_st_p4_width = self->_lf_sim_st_p4_width; SUPPRESS_UNUSED_WARNING(sim_st_p4_width);
    #line 1958 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    self->sim_start_time_p4 = sim_st_p4->value;
    // lf_print("Plant start time: %lld\n", self->sim_start_time);
#line 49 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _plant_actuatorreaction_function_4(void* instance_args) {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_actuator_a1_force_t* a1_force = self->_lf_a1_force;
    int a1_force_width = self->_lf_a1_force_width; SUPPRESS_UNUSED_WARNING(a1_force_width);
    _plant_actuator_a2_force_t* a2_force = self->_lf_a2_force;
    int a2_force_width = self->_lf_a2_force_width; SUPPRESS_UNUSED_WARNING(a2_force_width);
    _plant_actuator_a3_force_t* a3_force = self->_lf_a3_force;
    int a3_force_width = self->_lf_a3_force_width; SUPPRESS_UNUSED_WARNING(a3_force_width);
    _plant_actuator_a4_force_t* a4_force = self->_lf_a4_force;
    int a4_force_width = self->_lf_a4_force_width; SUPPRESS_UNUSED_WARNING(a4_force_width);
    _plant_actuator_CF_force_t* CF_force = &self->_lf_CF_force;
    #line 1963 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    if (a1_force -> is_present && a2_force -> is_present &&
        a3_force -> is_present && a4_force -> is_present) {
        // lf_print("Plant received forces: %f, %f, %f, %f\n",
        //          a1_force->value, a2_force->value,
        //          a3_force->value, a4_force->value);
        lf_set(CF_force, (a1_force->value + a2_force->value +
                          a3_force->value + a4_force->value) / 4.0);
        log_raw2("IvPSimLatency", 50, (lf_time_physical_elapsed() - 
                 self->sim_start_time_p1) / 1000000);
        log_raw2("IvPSimLatency", 50, (lf_time_physical_elapsed() - 
                 self->sim_start_time_p2) / 1000000);
        log_raw2("IvPSimLatency", 50, (lf_time_physical_elapsed() - 
                 self->sim_start_time_p3) / 1000000);
        log_raw2("IvPSimLatency", 50, (lf_time_physical_elapsed() -
                    self->sim_start_time_p4) / 1000000);
        lf_print("IvPSimLatency_ms: %lld\n",
                 (lf_time_physical_elapsed() - self->sim_start_time_p1) / 1000000);
        lf_print("IvPSimLatency_ms: %lld\n",
                 (lf_time_physical_elapsed() - self->sim_start_time_p2) / 1000000);
        lf_print("IvPSimLatency_ms: %lld\n",
                 (lf_time_physical_elapsed() - self->sim_start_time_p3) / 1000000);
        lf_print("IvPSimLatency_ms: %lld\n",
                 (lf_time_physical_elapsed() - self->sim_start_time_p4) / 1000000);
    }
#line 89 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_actuator.c"
}
#include "include/api/reaction_macros_undef.h"
_plant_actuator_self_t* new__plant_actuator() {
    _plant_actuator_self_t* self = (_plant_actuator_self_t*)lf_new_reactor(sizeof(_plant_actuator_self_t));
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
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _plant_actuatorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _plant_actuatorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _plant_actuatorreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _plant_actuatorreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _plant_actuatorreaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__a1_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a1_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a1_force_reactions[0] = &self->_lf__reaction_4;
    self->_lf__a1_force.reactions = &self->_lf__a1_force_reactions[0];
    self->_lf__a1_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a1_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a1_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a2_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a2_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a2_force_reactions[0] = &self->_lf__reaction_4;
    self->_lf__a2_force.reactions = &self->_lf__a2_force_reactions[0];
    self->_lf__a2_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a2_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a2_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a3_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a3_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a3_force_reactions[0] = &self->_lf__reaction_4;
    self->_lf__a3_force.reactions = &self->_lf__a3_force_reactions[0];
    self->_lf__a3_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a3_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a3_force.tmplt.type.element_size = sizeof(double);
    self->_lf__a4_force.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a4_force.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a4_force_reactions[0] = &self->_lf__reaction_4;
    self->_lf__a4_force.reactions = &self->_lf__a4_force_reactions[0];
    self->_lf__a4_force.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a4_force.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a4_force.tmplt.type.element_size = sizeof(double);
    self->_lf__sim_st_p1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p1_reactions[0] = &self->_lf__reaction_0;
    self->_lf__sim_st_p1.reactions = &self->_lf__sim_st_p1_reactions[0];
    self->_lf__sim_st_p1.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sim_st_p1.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sim_st_p1.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p2_reactions[0] = &self->_lf__reaction_1;
    self->_lf__sim_st_p2.reactions = &self->_lf__sim_st_p2_reactions[0];
    self->_lf__sim_st_p2.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sim_st_p2.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sim_st_p2.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p3_reactions[0] = &self->_lf__reaction_2;
    self->_lf__sim_st_p3.reactions = &self->_lf__sim_st_p3_reactions[0];
    self->_lf__sim_st_p3.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sim_st_p3.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sim_st_p3.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__sim_st_p4.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p4.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sim_st_p4_reactions[0] = &self->_lf__reaction_3;
    self->_lf__sim_st_p4.reactions = &self->_lf__sim_st_p4_reactions[0];
    self->_lf__sim_st_p4.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sim_st_p4.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sim_st_p4.tmplt.type.element_size = sizeof(interval_t);
    return self;
}
