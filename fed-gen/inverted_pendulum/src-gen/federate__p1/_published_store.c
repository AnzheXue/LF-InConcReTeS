#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p1/published_store.h"
#include "_published_store.h"
// *********** From the preamble, verbatim:
#line 597 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
version vt[MAX_VERSIONS];
version vi[MAX_VERSIONS];
version ve[MAX_VERSIONS];
#line 11 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _published_storereaction_function_0(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_input_globalT_t* input_globalT = self->_lf_input_globalT;
    int input_globalT_width = self->_lf_input_globalT_width; SUPPRESS_UNUSED_WARNING(input_globalT_width);
    #line 628 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    version i;
    i.value = self->g_target.value;
    i.time = self->g_target.time;
    vt[self->version_T_count % MAX_VERSIONS] = i;
    self->min_index_T = (self->version_T_count / MAX_VERSIONS) % MAX_VERSIONS;
    self->version_T_count++;
    self->g_target = input_globalT->value;
    // self->g_target.time = lf_time_logical_elapsed();
#line 30 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_1(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_input_globalI_t* input_globalI = self->_lf_input_globalI;
    int input_globalI_width = self->_lf_input_globalI_width; SUPPRESS_UNUSED_WARNING(input_globalI_width);
    #line 640 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    version i;
    i.value = self->global_integral.value;
    i.time = self->global_integral.time;
    vi[self->version_I_count % MAX_VERSIONS] = i;
    self->min_index_I = (self->version_I_count / MAX_VERSIONS) % MAX_VERSIONS;
    self->version_I_count++;
    self->global_integral = input_globalI->value;
    // self->global_integral.time = lf_time_logical_elapsed();
#line 47 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_2(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_input_globalE_t* input_globalE = self->_lf_input_globalE;
    int input_globalE_width = self->_lf_input_globalE_width; SUPPRESS_UNUSED_WARNING(input_globalE_width);
    #line 652 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    version i;
    i.value = self->global_error.value;
    i.time = self->global_error.time;
    ve[self->version_E_count % MAX_VERSIONS] = i;
    self->min_index_E = (self->version_E_count / MAX_VERSIONS) % MAX_VERSIONS;
    self->version_E_count++;
    self->global_error = input_globalE->value;
    // self->global_error.time = lf_time_logical_elapsed();
#line 64 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_3(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_request_T_t* request_T = self->_lf_request_T;
    int request_T_width = self->_lf_request_T_width; SUPPRESS_UNUSED_WARNING(request_T_width);
    _published_store_output_globalT_t* output_globalT = &self->_lf_output_globalT;
    #line 664 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    // lf_print("request_T = %lld\n", request_T->value);
    if (self->g_target.time <= request_T->value) {
        // lf_print("T:1");
        // if (request_T->value - self->g_target.time > TIME_PERIOD) {
        //     lf_set(output_globalT, -1);
        // } else {
        lf_set(output_globalT, self->g_target.value);
        // }
    } else if(vt[self->min_index_T].time > request_T->value || self->version_T_count == 0) {
        // lf_print("T:2");
        lf_request_stop();
    } else {
        // lf_print("T:3");
        // lf_print("Skipping update for global target, request time: %lld, input time: %lld\n", request_T->value, self->g_target.time);
        // uint64_t t_min = vt[self->min_index_T].time;
        // uint64_t t_diff = request_T->value - t_min;
        // uint64_t n = t_diff / PUBLISHING_INTERVAL;
        // lf_set(output_globalT, vt[(self->min_index_T + n) % MAX_VERSIONS].value); // Set to default if not updated
        // lf_print("requestT: %lld\n", request_T->value);
        // lf_print("globalT: %lld\n", self->g_target.time);
        lf_set(output_globalT, -1);
    }
    // lf_print("Published global target: %f\n", output_globalT->value);
#line 97 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_4(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_request_I_t* request_I = self->_lf_request_I;
    int request_I_width = self->_lf_request_I_width; SUPPRESS_UNUSED_WARNING(request_I_width);
    _published_store_output_globalI_t* output_globalI = &self->_lf_output_globalI;
    #line 691 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    if (self->global_integral.time <= request_I->value) {
        // lf_print("I:1");
        // lf_print("Publishing global integral: %lld\n", self->global_integral.value);
        // if (request_I->value - self->global_integral.time > TIME_PERIOD) {
        //     lf_set(output_globalI, -1);
        // } else {
        lf_set(output_globalI, self->global_integral.value);
        // }
    } else if(vi[self->min_index_I].time > request_I->value || self->version_I_count == 0) {
        // lf_print("I:2");
        lf_request_stop();
    } else {
        // lf_print("I:3");
        // lf_print("Skipping update for global integral, request time: %lld, input time: %lld\n", request_I->value, self->global_integral.time);
        // uint64_t t_min = vi[self->min_index_I].time;
        // uint64_t t_diff = request_I->value - t_min;
        // uint64_t n = t_diff / PUBLISHING_INTERVAL;
        // lf_set(output_globalI, vi[(self->min_index_I + n) % MAX_VERSIONS].value); // Set to default if not updated
        // lf_print("difference: %f\n", request_I->value - self->global_integral.time);
        // lf_print("requestI: %f\n", request_I->value);
        // lf_print("globalI: %f\n", self->global_integral.value);
        // lf_print("requestI: %lld\n", request_I->value);
        // lf_print("globalI: %lld\n", self->global_integral.time);
        lf_set(output_globalI, -1);
    }
    // lf_print("Published global integral: %f\n", output_globalI->value);
#line 133 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_5(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _published_store_request_E_t* request_E = self->_lf_request_E;
    int request_E_width = self->_lf_request_E_width; SUPPRESS_UNUSED_WARNING(request_E_width);
    _published_store_output_globalE_t* output_globalE = &self->_lf_output_globalE;
    #line 721 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    // lf_print("request_E = %lld\n", request_E->value);
    if (self->global_error.time <= request_E->value) {
        // lf_print("E:1");
        // lf_print("Publishing global error: %lld\n", self->global_error.value);
    //     lf_print("Publishing global error: %lld\n", self->global_error.value);
        // if (request_E->value - self->global_error.time > TIME_PERIOD) {
        //     lf_set(output_globalE, -1);
        // } else {
        lf_set(output_globalE, self->global_error.value);
        // }
    } else if(ve[self->min_index_E].time > request_E->value || self->version_E_count == 0) {
        // lf_print("E:2");
        lf_request_stop();
    } else {
        // lf_print("E:3");
        // lf_print("Skipping update for global integral, request time: %lld, input time: %lld\n", request_I->value, self->global_integral.time);
        // uint64_t t_min = ve[self->min_index_E].time;
        // uint64_t t_diff = request_E->value - t_min;
        // uint64_t n = t_diff / PUBLISHING_INTERVAL;
        // lf_set(output_globalE, ve[(self->min_index_E + n) % MAX_VERSIONS].value); // Set to default if not updated
        // lf_print("requestE: %f\n", request_E->value);
        // lf_print("globalE: %f\n", self->global_error.value);
        // lf_print("requestE: %lld\n", request_E->value);
        // lf_print("globalE: %lld\n", self->global_error.time);
        lf_set(output_globalE, -1);
    }
    // lf_print("Published global error: %f\n", output_globalE->value);
#line 170 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _published_storereaction_function_6(void* instance_args) {
    _published_store_self_t* self = (_published_store_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 752 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p1.lf"
    lf_print("Shutting down due to unwanted condition.\n");
      if (_csv) {
          fclose(_csv);
      }
#line 182 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p1/_published_store.c"
}
#include "include/api/reaction_macros_undef.h"
_published_store_self_t* new__published_store() {
    _published_store_self_t* self = (_published_store_self_t*)lf_new_reactor(sizeof(_published_store_self_t));
    // Set input by default to an always absent default input.
    self->_lf_input_globalT = &self->_lf_default__input_globalT;
    // Set the default source reactor pointer
    self->_lf_default__input_globalT._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_input_globalI = &self->_lf_default__input_globalI;
    // Set the default source reactor pointer
    self->_lf_default__input_globalI._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_input_globalE = &self->_lf_default__input_globalE;
    // Set the default source reactor pointer
    self->_lf_default__input_globalE._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_T = &self->_lf_default__request_T;
    // Set the default source reactor pointer
    self->_lf_default__request_T._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_I = &self->_lf_default__request_I;
    // Set the default source reactor pointer
    self->_lf_default__request_I._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_E = &self->_lf_default__request_E;
    // Set the default source reactor pointer
    self->_lf_default__request_E._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _published_storereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _published_storereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _published_storereaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _published_storereaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _published_storereaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _published_storereaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
    self->_lf__reaction_6.number = 6;
    self->_lf__reaction_6.function = _published_storereaction_function_6;
    self->_lf__reaction_6.self = self;
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    self->_lf__reaction_6.STP_handler = NULL;
    self->_lf__reaction_6.name = "?";
    self->_lf__reaction_6.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_6;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__input_globalT.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalT.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalT_reactions[0] = &self->_lf__reaction_0;
    self->_lf__input_globalT.reactions = &self->_lf__input_globalT_reactions[0];
    self->_lf__input_globalT.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__input_globalT.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__input_globalT.tmplt.type.element_size = sizeof(tuple);
    self->_lf__input_globalI.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalI.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalI_reactions[0] = &self->_lf__reaction_1;
    self->_lf__input_globalI.reactions = &self->_lf__input_globalI_reactions[0];
    self->_lf__input_globalI.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__input_globalI.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__input_globalI.tmplt.type.element_size = sizeof(tuple);
    self->_lf__input_globalE.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalE.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalE_reactions[0] = &self->_lf__reaction_2;
    self->_lf__input_globalE.reactions = &self->_lf__input_globalE_reactions[0];
    self->_lf__input_globalE.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__input_globalE.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__input_globalE.tmplt.type.element_size = sizeof(tuple);
    self->_lf__request_T.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_T.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_T_reactions[0] = &self->_lf__reaction_3;
    self->_lf__request_T.reactions = &self->_lf__request_T_reactions[0];
    self->_lf__request_T.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_T.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_T.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__request_I.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_I.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_I_reactions[0] = &self->_lf__reaction_4;
    self->_lf__request_I.reactions = &self->_lf__request_I_reactions[0];
    self->_lf__request_I.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_I.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_I.tmplt.type.element_size = sizeof(interval_t);
    self->_lf__request_E.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_E.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_E_reactions[0] = &self->_lf__reaction_5;
    self->_lf__request_E.reactions = &self->_lf__request_E_reactions[0];
    self->_lf__request_E.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_E.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_E.tmplt.type.element_size = sizeof(interval_t);
    return self;
}
