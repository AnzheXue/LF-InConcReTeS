#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p4/_p4e2_p2p1_in.h"
#include "__p4e2_p2p1_in.h"
// ***** Start of method declarations.
// ***** End of method declarations.
__p4e2_p2p1_in_self_t* new___p4e2_p2p1_in() {
    __p4e2_p2p1_in_self_t* self = (__p4e2_p2p1_in_self_t*)lf_new_reactor(sizeof(__p4e2_p2p1_in_self_t));
    // Set input by default to an always absent default input.
    self->_lf_port0 = &self->_lf_default__port0;
    // Set the default source reactor pointer
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    self->_lf__port0.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(tuple);
    return self;
}
