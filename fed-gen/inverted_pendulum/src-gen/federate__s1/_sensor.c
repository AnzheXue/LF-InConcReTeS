#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__s1/Sensor.h"
#include "_sensor.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _sensorreaction_function_0(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_request_t* request = &self->_lf_request;
    _sensor_sim_start_time_t* sim_start_time = &self->_lf_sim_start_time;
    #line 161 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__s1.lf"
    lf_set(request, 0.0);
    lf_set(sim_start_time, lf_time_physical_elapsed());
    // lf_print("request = %f\n", request->value);
    // lf_print("out[1] = %f\n", out[1]->value);
    // lf_print("out[2] = %f\n", out[2]->value);
    // lf_print("out[3] = %f\n", out[3]->value);
#line 20 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__s1/_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _sensorreaction_function_1(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_AP_in_t* AP_in = self->_lf_AP_in;
    int AP_in_width = self->_lf_AP_in_width; SUPPRESS_UNUSED_WARNING(AP_in_width);
    _sensor_AP_out_t* AP_out = &self->_lf_AP_out;
    #line 171 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__s1.lf"
    lf_set(AP_out, AP_in->value);
    // lf_print("AP_out = %f\n", AP_out->value);
#line 32 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__s1/_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _sensorreaction_function_2(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_AV_in_t* AV_in = self->_lf_AV_in;
    int AV_in_width = self->_lf_AV_in_width; SUPPRESS_UNUSED_WARNING(AV_in_width);
    _sensor_AV_out_t* AV_out = &self->_lf_AV_out;
    #line 177 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__s1.lf"
    lf_set(AV_out, AV_in->value);
    // lf_print("AV_out = %f\n", AV_out->value);
#line 44 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__s1/_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _sensorreaction_function_3(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_CP_in_t* CP_in = self->_lf_CP_in;
    int CP_in_width = self->_lf_CP_in_width; SUPPRESS_UNUSED_WARNING(CP_in_width);
    _sensor_CP_out_t* CP_out = &self->_lf_CP_out;
    #line 183 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__s1.lf"
    lf_set(CP_out, CP_in->value);
    // lf_print("CP_out = %f\n", CP_out->value);
#line 56 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__s1/_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _sensorreaction_function_4(void* instance_args) {
    _sensor_self_t* self = (_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sensor_CV_in_t* CV_in = self->_lf_CV_in;
    int CV_in_width = self->_lf_CV_in_width; SUPPRESS_UNUSED_WARNING(CV_in_width);
    _sensor_CV_out_t* CV_out = &self->_lf_CV_out;
    #line 189 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__s1.lf"
    lf_set(CV_out, CV_in->value);
    // lf_print("CV_out = %f\n", CV_out->value);
#line 68 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__s1/_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
_sensor_self_t* new__sensor() {
    _sensor_self_t* self = (_sensor_self_t*)lf_new_reactor(sizeof(_sensor_self_t));
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
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _sensorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _sensorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _sensorreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _sensorreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _sensorreaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AP_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__AP_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AP_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__AP_in.reactions = &self->_lf__AP_in_reactions[0];
    self->_lf__AP_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__AP_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__AP_in.tmplt.type.element_size = sizeof(double);
    self->_lf__AV_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__AV_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AV_in_reactions[0] = &self->_lf__reaction_2;
    self->_lf__AV_in.reactions = &self->_lf__AV_in_reactions[0];
    self->_lf__AV_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__AV_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__AV_in.tmplt.type.element_size = sizeof(double);
    self->_lf__CP_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__CP_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__CP_in_reactions[0] = &self->_lf__reaction_3;
    self->_lf__CP_in.reactions = &self->_lf__CP_in_reactions[0];
    self->_lf__CP_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__CP_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__CP_in.tmplt.type.element_size = sizeof(double);
    self->_lf__CV_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__CV_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__CV_in_reactions[0] = &self->_lf__reaction_4;
    self->_lf__CV_in.reactions = &self->_lf__CV_in_reactions[0];
    self->_lf__CV_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__CV_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__CV_in.tmplt.type.element_size = sizeof(double);
    return self;
}
