#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/EIGtreeReduction.h"
#include "_eigtreereduction.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _eigtreereductionreaction_function_0(void* instance_args) {
    _eigtreereduction_self_t* self = (_eigtreereduction_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _eigtreereduction_round0_in_t* round0_in = self->_lf_round0_in;
    int round0_in_width = self->_lf_round0_in_width; SUPPRESS_UNUSED_WARNING(round0_in_width);
    _eigtreereduction_p0p1_in_t* p0p1_in = self->_lf_p0p1_in;
    int p0p1_in_width = self->_lf_p0p1_in_width; SUPPRESS_UNUSED_WARNING(p0p1_in_width);
    _eigtreereduction_p0p2_in_t* p0p2_in = self->_lf_p0p2_in;
    int p0p2_in_width = self->_lf_p0p2_in_width; SUPPRESS_UNUSED_WARNING(p0p2_in_width);
    _eigtreereduction_p0p3_in_t* p0p3_in = self->_lf_p0p3_in;
    int p0p3_in_width = self->_lf_p0p3_in_width; SUPPRESS_UNUSED_WARNING(p0p3_in_width);
    _eigtreereduction_p0p1p2_in_t* p0p1p2_in = self->_lf_p0p1p2_in;
    int p0p1p2_in_width = self->_lf_p0p1p2_in_width; SUPPRESS_UNUSED_WARNING(p0p1p2_in_width);
    _eigtreereduction_p0p1p3_in_t* p0p1p3_in = self->_lf_p0p1p3_in;
    int p0p1p3_in_width = self->_lf_p0p1p3_in_width; SUPPRESS_UNUSED_WARNING(p0p1p3_in_width);
    _eigtreereduction_p0p2p1_in_t* p0p2p1_in = self->_lf_p0p2p1_in;
    int p0p2p1_in_width = self->_lf_p0p2p1_in_width; SUPPRESS_UNUSED_WARNING(p0p2p1_in_width);
    _eigtreereduction_p0p2p3_in_t* p0p2p3_in = self->_lf_p0p2p3_in;
    int p0p2p3_in_width = self->_lf_p0p2p3_in_width; SUPPRESS_UNUSED_WARNING(p0p2p3_in_width);
    _eigtreereduction_p0p3p1_in_t* p0p3p1_in = self->_lf_p0p3p1_in;
    int p0p3p1_in_width = self->_lf_p0p3p1_in_width; SUPPRESS_UNUSED_WARNING(p0p3p1_in_width);
    _eigtreereduction_p0p3p2_in_t* p0p3p2_in = self->_lf_p0p3p2_in;
    int p0p3p2_in_width = self->_lf_p0p3p2_in_width; SUPPRESS_UNUSED_WARNING(p0p3p2_in_width);
    _eigtreereduction_final_out_t* final_out = &self->_lf_final_out;
    #line 816 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    if (round0_in->is_present &&
        p0p1_in->is_present && p0p2_in->is_present && p0p3_in->is_present &&
        p0p1p2_in->is_present && p0p1p3_in->is_present &&
        p0p2p1_in->is_present && p0p2p3_in->is_present &&
        p0p3p1_in->is_present && p0p3p2_in->is_present) {
        tuple inputs[10] = {
            round0_in->value, p0p1_in->value, p0p2_in->value, p0p3_in->value,
            p0p1p2_in->value, p0p1p3_in->value, p0p2p1_in->value, p0p2p3_in->value,
            p0p3p1_in->value, p0p3p2_in->value
        };
    
        int unique_count = 0;
        tally t[10] = {0};
    
        for (int i = 0; i < 10; i++) {
            int found = 0;
            for (int j = 0; j < unique_count; j++) {
                if (inputs[i].value == t[j].value) {
                    t[j].count++;
                    t[j].first_index = i;
                    found = 1;
                    break;
                }
            }
    
            if (!found) {
                t[unique_count].value = inputs[i].value;
                t[unique_count].count = 1;
                t[unique_count].first_index = i;
                unique_count++;
            }
        }
    
        int max_count = 0;
        int best_index = 0;
        for (int i = 0; i < unique_count; i++) {
            if (t[i].count > max_count) {
                max_count = t[i].count;
                best_index = t[i].first_index;
            }
        }
        lf_set(final_out, inputs[best_index]);
        // lf_print("EIGtreeReduction final output: %f\n", inputs[best_index].value);
    }
#line 77 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_eigtreereduction.c"
}
#include "include/api/reaction_macros_undef.h"
_eigtreereduction_self_t* new__eigtreereduction() {
    _eigtreereduction_self_t* self = (_eigtreereduction_self_t*)lf_new_reactor(sizeof(_eigtreereduction_self_t));
    // Set input by default to an always absent default input.
    self->_lf_round0_in = &self->_lf_default__round0_in;
    // Set the default source reactor pointer
    self->_lf_default__round0_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p1_in = &self->_lf_default__p0p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p2_in = &self->_lf_default__p0p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p3_in = &self->_lf_default__p0p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p1p2_in = &self->_lf_default__p0p1p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p1p2_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p1p3_in = &self->_lf_default__p0p1p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p1p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p2p1_in = &self->_lf_default__p0p2p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p2p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p2p3_in = &self->_lf_default__p0p2p3_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p2p3_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p3p1_in = &self->_lf_default__p0p3p1_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p3p1_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_p0p3p2_in = &self->_lf_default__p0p3p2_in;
    // Set the default source reactor pointer
    self->_lf_default__p0p3p2_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _eigtreereductionreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__round0_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__round0_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__round0_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__round0_in.reactions = &self->_lf__round0_in_reactions[0];
    self->_lf__round0_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__round0_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__round0_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p1_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p1_in.reactions = &self->_lf__p0p1_in_reactions[0];
    self->_lf__p0p1_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p1_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p2_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p2_in.reactions = &self->_lf__p0p2_in_reactions[0];
    self->_lf__p0p2_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p2_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p3_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p3_in.reactions = &self->_lf__p0p3_in_reactions[0];
    self->_lf__p0p3_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p3_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p1p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p1p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p1p2_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p1p2_in.reactions = &self->_lf__p0p1p2_in_reactions[0];
    self->_lf__p0p1p2_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p1p2_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p1p2_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p1p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p1p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p1p3_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p1p3_in.reactions = &self->_lf__p0p1p3_in_reactions[0];
    self->_lf__p0p1p3_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p1p3_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p1p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p2p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p2p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p2p1_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p2p1_in.reactions = &self->_lf__p0p2p1_in_reactions[0];
    self->_lf__p0p2p1_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p2p1_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p2p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p2p3_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p2p3_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p2p3_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p2p3_in.reactions = &self->_lf__p0p2p3_in_reactions[0];
    self->_lf__p0p2p3_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p2p3_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p2p3_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p3p1_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p3p1_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p3p1_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p3p1_in.reactions = &self->_lf__p0p3p1_in_reactions[0];
    self->_lf__p0p3p1_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p3p1_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p3p1_in.tmplt.type.element_size = sizeof(tuple);
    self->_lf__p0p3p2_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__p0p3p2_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__p0p3p2_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__p0p3p2_in.reactions = &self->_lf__p0p3p2_in_reactions[0];
    self->_lf__p0p3p2_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__p0p3p2_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__p0p3p2_in.tmplt.type.element_size = sizeof(tuple);
    return self;
}
