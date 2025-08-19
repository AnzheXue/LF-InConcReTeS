#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p3/compute.h"
#include "_compute.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _computereaction_function_0(void* instance_args) {
    _compute_self_t* self = (_compute_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _compute_AP_in_t* AP_in = self->_lf_AP_in;
    int AP_in_width = self->_lf_AP_in_width; SUPPRESS_UNUSED_WARNING(AP_in_width);
    #line 300 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->AP = AP_in->value;
#line 15 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_compute.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _computereaction_function_1(void* instance_args) {
    _compute_self_t* self = (_compute_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _compute_globalI_t* globalI = self->_lf_globalI;
    int globalI_width = self->_lf_globalI_width; SUPPRESS_UNUSED_WARNING(globalI_width);
    #line 305 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->global_integral = globalI->value;
#line 25 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_compute.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _computereaction_function_2(void* instance_args) {
    _compute_self_t* self = (_compute_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _compute_globalE_t* globalE = self->_lf_globalE;
    int globalE_width = self->_lf_globalE_width; SUPPRESS_UNUSED_WARNING(globalE_width);
    #line 310 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->global_error = globalE->value;
#line 35 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_compute.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _computereaction_function_3(void* instance_args) {
    _compute_self_t* self = (_compute_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _compute_globalT_t* globalT = self->_lf_globalT;
    int globalT_width = self->_lf_globalT_width; SUPPRESS_UNUSED_WARNING(globalT_width);
    #line 315 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    self->g_target = globalT->value;
#line 45 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_compute.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _computereaction_function_4(void* instance_args) {
    _compute_self_t* self = (_compute_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _compute_error_t* error = &self->_lf_error;
    _compute_integral_t* integral = &self->_lf_integral;
    _compute_global_target_t* global_target = &self->_lf_global_target;
    _compute_force_t* force = &self->_lf_force;
    #line 320 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src/federate__p3.lf"
    //   if (!(AP_in->is_present &&
    //     globalT->is_present && globalI->is_present && globalE->is_present)) {
    //   return;   // wait until we have everything
    // }
      // double dt = lf_time_logical_elapsed() / 1000000000.0 * 0.05;
      // double dt = (lf_time_logical_elapsed() * 0.05) / lf_time_physical_elapsed();
      double dt;
      if (self->last_arrival_time != 0) {
          // lf_print("logical_time: %ld\n", lf_time_logical_elapsed());
          // lf_print("physical_time: %ld\n", lf_time_physical_elapsed());
          dt = (TIME_PERIOD * 1000000 * 0.05) / (lf_time_physical_elapsed() - self->last_arrival_time);
          // lf_print("dt: %f\n", dt);
      } else {
          dt = TIMESTEP;
      }
      self->last_arrival_time = lf_time_physical_elapsed();
      // lf_print("dt: %f\n", dt);
      // lf_print("dt: %f\n", dt);
      double target = self->g_target;
      double current = self->AP;
      lf_print("Current: %f\n", current);
      // lf_print("Global Integral: %f\n", self->global_integral);
    
      double err = current - target;
      double integ = self->global_integral + err * dt;
      double deriv = (err - self->global_error) / dt;
      // lf_print("derivative: %f\n", deriv);
    
      double u = self->Kp * err + self->Ki * integ + self->Kd * deriv;
    
      lf_set(error, err);
      // lf_print("Error: %f\n", err);
      lf_set(integral, integ);
      // lf_print("Integral: %f\n", integ);
      lf_set(force, u);
      lf_print("Force: %f\n", u);
      lf_set(global_target, self->g_target);
      // lf_print("Global Target: %f\n", self->g_target);
#line 94 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__p3/_compute.c"
}
#include "include/api/reaction_macros_undef.h"
_compute_self_t* new__compute() {
    _compute_self_t* self = (_compute_self_t*)lf_new_reactor(sizeof(_compute_self_t));
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
    self->_lf_globalT = &self->_lf_default__globalT;
    // Set the default source reactor pointer
    self->_lf_default__globalT._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_globalI = &self->_lf_default__globalI;
    // Set the default source reactor pointer
    self->_lf_default__globalI._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_globalE = &self->_lf_default__globalE;
    // Set the default source reactor pointer
    self->_lf_default__globalE._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _computereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _computereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _computereaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _computereaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _computereaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_4;
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
    self->_lf__AP_in_reactions[0] = &self->_lf__reaction_0;
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
    self->_lf__globalT.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__globalT.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__globalT_reactions[0] = &self->_lf__reaction_3;
    self->_lf__globalT.reactions = &self->_lf__globalT_reactions[0];
    self->_lf__globalT.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__globalT.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__globalT.tmplt.type.element_size = sizeof(double);
    self->_lf__globalI.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__globalI.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__globalI_reactions[0] = &self->_lf__reaction_1;
    self->_lf__globalI.reactions = &self->_lf__globalI_reactions[0];
    self->_lf__globalI.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__globalI.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__globalI.tmplt.type.element_size = sizeof(double);
    self->_lf__globalE.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__globalE.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__globalE_reactions[0] = &self->_lf__reaction_2;
    self->_lf__globalE.reactions = &self->_lf__globalE_reactions[0];
    self->_lf__globalE.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__globalE.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__globalE.tmplt.type.element_size = sizeof(double);
    return self;
}
