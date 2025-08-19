#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p2/App.h"
#include "_app.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_app_self_t* new__app() {
    _app_self_t* self = (_app_self_t*)lf_new_reactor(sizeof(_app_self_t));
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
    self->_lf_input_globalI = &self->_lf_default__input_globalI;
    // Set the default source reactor pointer
    self->_lf_default__input_globalI._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_input_globalT = &self->_lf_default__input_globalT;
    // Set the default source reactor pointer
    self->_lf_default__input_globalT._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_input_globalE = &self->_lf_default__input_globalE;
    // Set the default source reactor pointer
    self->_lf_default__input_globalE._base.source_reactor = (self_base_t*)self;
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
    self->_lf__input_globalI.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalI.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalI.tmplt.type.element_size = sizeof(double);
    self->_lf__input_globalT.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalT.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalT.tmplt.type.element_size = sizeof(double);
    self->_lf__input_globalE.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__input_globalE.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__input_globalE.tmplt.type.element_size = sizeof(double);
    return self;
}
