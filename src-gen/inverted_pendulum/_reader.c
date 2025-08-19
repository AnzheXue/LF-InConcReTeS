#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/reader.h"
#include "_reader.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _readerreaction_function_0(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_input_globalT_t* input_globalT = self->_lf_input_globalT;
    int input_globalT_width = self->_lf_input_globalT_width; SUPPRESS_UNUSED_WARNING(input_globalT_width);
    _reader_output_globalT_t* output_globalT = &self->_lf_output_globalT;
    _reader_sr_t* sr = &self->_lf_sr;
    #line 180 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    add_successful_reads(1);
    lf_set(output_globalT, input_globalT->value);
    lf_print("successful_reads: %d\n", successful_reads);
    lf_set(sr, successful_reads);
    // lf_print("output_globalT = %f\n", output_globalT->value);
#line 21 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_1(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_input_globalI_t* input_globalI = self->_lf_input_globalI;
    int input_globalI_width = self->_lf_input_globalI_width; SUPPRESS_UNUSED_WARNING(input_globalI_width);
    _reader_output_globalI_t* output_globalI = &self->_lf_output_globalI;
    _reader_sr_t* sr = &self->_lf_sr;
    #line 188 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    add_successful_reads(1);
    lf_set(output_globalI, input_globalI->value);
    lf_print("successful_reads: %d\n", successful_reads);
    lf_set(sr, successful_reads);   
    // lf_print("output_globalI = %f\n", output_globalI->value);
#line 37 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_2(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_input_globalE_t* input_globalE = self->_lf_input_globalE;
    int input_globalE_width = self->_lf_input_globalE_width; SUPPRESS_UNUSED_WARNING(input_globalE_width);
    _reader_output_globalE_t* output_globalE = &self->_lf_output_globalE;
    _reader_sr_t* sr = &self->_lf_sr;
    #line 196 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    add_successful_reads(1);
    lf_set(output_globalE, input_globalE->value);
    lf_print("successful_reads: %d\n", successful_reads);
    lf_set(sr, successful_reads);
    // lf_print("output_globalE = %f\n", output_globalE->value);
#line 53 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_3(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_AP_in_t* AP_in = self->_lf_AP_in;
    int AP_in_width = self->_lf_AP_in_width; SUPPRESS_UNUSED_WARNING(AP_in_width);
    _reader_AP_out_t* AP_out = &self->_lf_AP_out;
    #line 204 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(AP_out, AP_in -> value);
    // lf_print("AP_out = %f\n", AP_out->value);
#line 65 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_4(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_AV_in_t* AV_in = self->_lf_AV_in;
    int AV_in_width = self->_lf_AV_in_width; SUPPRESS_UNUSED_WARNING(AV_in_width);
    _reader_AV_out_t* AV_out = &self->_lf_AV_out;
    #line 209 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(AV_out, AV_in -> value);
    // lf_print("AV_out = %f\n", AV_out->value);
#line 77 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_5(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_CP_in_t* CP_in = self->_lf_CP_in;
    int CP_in_width = self->_lf_CP_in_width; SUPPRESS_UNUSED_WARNING(CP_in_width);
    _reader_CP_out_t* CP_out = &self->_lf_CP_out;
    #line 214 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(CP_out, CP_in -> value);
    // lf_print("CP_out = %f\n", CP_out->value);
#line 89 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_6(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_CV_in_t* CV_in = self->_lf_CV_in;
    int CV_in_width = self->_lf_CV_in_width; SUPPRESS_UNUSED_WARNING(CV_in_width);
    _reader_CV_out_t* CV_out = &self->_lf_CV_out;
    #line 219 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(CV_out, CV_in -> value);
    // lf_print("CV_out = %f\n", CV_out->value);
#line 101 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _readerreaction_function_7(void* instance_args) {
    _reader_self_t* self = (_reader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _reader_request_T_t* request_T = &self->_lf_request_T;
    _reader_request_I_t* request_I = &self->_lf_request_I;
    _reader_request_E_t* request_E = &self->_lf_request_E;
    _reader_tr_t* tr = &self->_lf_tr;
    #line 224 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    lf_set(request_T, lf_time_logical_elapsed());
    lf_set(request_I, lf_time_logical_elapsed());
    lf_set(request_E, lf_time_logical_elapsed());
    add_total_reads(3);
    lf_print("total_reads: %d\n", total_reads);
    lf_set(tr, total_reads);
    // lf_print("request_T = %ld\n", request_T->value);
    // lf_print("request_I = %ld\n", request_I->value);
    // lf_print("request_E = %ld\n", request_E->value);
#line 121 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_reader.c"
}
#include "include/api/reaction_macros_undef.h"
_reader_self_t* new__reader() {
    _reader_self_t* self = (_reader_self_t*)lf_new_reactor(sizeof(_reader_self_t));
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
    self->_lf__reaction_0.function = _readerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _readerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _readerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _readerreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _readerreaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _readerreaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
    self->_lf__reaction_6.number = 6;
    self->_lf__reaction_6.function = _readerreaction_function_6;
    self->_lf__reaction_6.self = self;
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    self->_lf__reaction_6.STP_handler = NULL;
    self->_lf__reaction_6.name = "?";
    self->_lf__reaction_6.mode = NULL;
    self->_lf__reaction_7.number = 7;
    self->_lf__reaction_7.function = _readerreaction_function_7;
    self->_lf__reaction_7.self = self;
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    self->_lf__reaction_7.STP_handler = NULL;
    self->_lf__reaction_7.name = "?";
    self->_lf__reaction_7.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_7;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
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
    self->_lf__input_globalT.tmplt.type.element_size = sizeof(double);
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
    self->_lf__input_globalI.tmplt.type.element_size = sizeof(double);
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
    self->_lf__input_globalE.tmplt.type.element_size = sizeof(double);
    self->_lf__AP_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__AP_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__AP_in_reactions[0] = &self->_lf__reaction_3;
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
    self->_lf__AV_in_reactions[0] = &self->_lf__reaction_4;
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
    self->_lf__CP_in_reactions[0] = &self->_lf__reaction_5;
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
    self->_lf__CV_in_reactions[0] = &self->_lf__reaction_6;
    self->_lf__CV_in.reactions = &self->_lf__CV_in_reactions[0];
    self->_lf__CV_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__CV_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__CV_in.tmplt.type.element_size = sizeof(double);
    return self;
}
