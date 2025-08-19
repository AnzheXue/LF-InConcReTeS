#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p3/EIGtree.h"
#include "_eigtree.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_0(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree_store_in_t* store_in = self->_lf_store_in;
    int store_in_width = self->_lf_store_in_width; SUPPRESS_UNUSED_WARNING(store_in_width);
    #line 1053 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->start_time = lf_time_physical_elapsed();
    self->logical_start_time = lf_time_logical_elapsed();
    // lf_print("EIGtree started at: %lld\n", self->start_time);
#line 17 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_1(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree_sr_t* sr = self->_lf_sr;
    int sr_width = self->_lf_sr_width; SUPPRESS_UNUSED_WARNING(sr_width);
    #line 1060 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->successful_reads = sr->value;
#line 27 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_2(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree_tr_t* tr = self->_lf_tr;
    int tr_width = self->_lf_tr_width; SUPPRESS_UNUSED_WARNING(tr_width);
    #line 1065 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->total_reads = tr->value;
#line 37 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_3(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree_sw_t* sw = self->_lf_sw;
    int sw_width = self->_lf_sw_width; SUPPRESS_UNUSED_WARNING(sw_width);
    #line 1070 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->successful_writes = sw->value;
#line 47 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_4(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtree_tw_t* tw = self->_lf_tw;
    int tw_width = self->_lf_tw_width; SUPPRESS_UNUSED_WARNING(tw_width);
    #line 1075 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->total_writes = tw->value;
#line 57 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _eigtreereaction_function_5(void* instance_args) {
    _eigtree_self_t* self = (_eigtree_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct etr {
        _eigtreereduction_final_out_t* final_out;
    
    } etr;
    etr.final_out = self->_lf_etr.final_out;
    #line 1080 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->end_time = lf_time_physical_elapsed();
    self->logical_end_time = lf_time_logical_elapsed();
    // lf_print("KVSLatency_ms: %lld\n", (self->end_time - self->start_time) / 1000000);
    long long delta = (self->end_time - self->start_time) / 1000000;
    if (delta > 5) {
        lf_print("KVSLogicalLatency_ms: %lld\n", (self->logical_end_time - self->logical_start_time) / 1000000);
    }
    // log_raw("KVS", 50, delta);
    log_raw("KVS", 50, delta, self->successful_reads, self->total_reads,
            self->successful_writes, self->total_writes);
    // lf_print("EIGtree ended at: %lld\n", self->end_time);
#line 80 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_eigtree.c"
}
#include "include/api/reaction_macros_undef.h"
_eigtree_self_t* new__eigtree() {
    _eigtree_self_t* self = (_eigtree_self_t*)lf_new_reactor(sizeof(_eigtree_self_t));
    // Set input by default to an always absent default input.
    self->_lf_store_in = &self->_lf_default__store_in;
    // Set the default source reactor pointer
    self->_lf_default__store_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p1_in = &self->_lf_default__p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p2_in = &self->_lf_default__p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p3_in = &self->_lf_default__p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p3_in._base.source_reactor = (self_base_t*)self;
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
    // Set input by default to an always absent default input.
    self->_lf_sr = &self->_lf_default__sr;
    // Set the default source reactor pointer
    self->_lf_default__sr._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_tr = &self->_lf_default__tr;
    // Set the default source reactor pointer
    self->_lf_default__tr._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_sw = &self->_lf_default__sw;
    // Set the default source reactor pointer
    self->_lf_default__sw._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_tw = &self->_lf_default__tw;
    // Set the default source reactor pointer
    self->_lf_default__tw._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_etr_width = -2;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf_etr.final_out_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf_etr.final_out_reactions[0] = &self->_lf__reaction_5;
    self->_lf_etr.final_out_trigger.reactions = self->_lf_etr.final_out_reactions;
    self->_lf_etr.final_out_trigger.last_tag = NEVER_TAG;
    self->_lf_etr.final_out_trigger.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf_etr.final_out_trigger.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _eigtreereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _eigtreereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _eigtreereaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _eigtreereaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _eigtreereaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _eigtreereaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
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
    self->_lf__p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p3p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__sr.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sr.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sr_reactions[0] = &self->_lf__reaction_1;
    self->_lf__sr.reactions = &self->_lf__sr_reactions[0];
    self->_lf__sr.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sr.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sr.tmplt.type.element_size = sizeof(int);
    self->_lf__tr.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__tr.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__tr_reactions[0] = &self->_lf__reaction_2;
    self->_lf__tr.reactions = &self->_lf__tr_reactions[0];
    self->_lf__tr.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__tr.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__tr.tmplt.type.element_size = sizeof(int);
    self->_lf__sw.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sw.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__sw_reactions[0] = &self->_lf__reaction_3;
    self->_lf__sw.reactions = &self->_lf__sw_reactions[0];
    self->_lf__sw.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__sw.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__sw.tmplt.type.element_size = sizeof(int);
    self->_lf__tw.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__tw.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__tw_reactions[0] = &self->_lf__reaction_4;
    self->_lf__tw.reactions = &self->_lf__tw_reactions[0];
    self->_lf__tw.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__tw.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__tw.tmplt.type.element_size = sizeof(int);
    return self;
}
