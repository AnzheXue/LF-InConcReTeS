#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/plant_sensor.h"
#include "_plant_sensor.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _plant_sensorreaction_function_0(void* instance_args) {
    _plant_sensor_self_t* self = (_plant_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_sensor_CF_in_t* CF_in = self->_lf_CF_in;
    int CF_in_width = self->_lf_CF_in_width; SUPPRESS_UNUSED_WARNING(CF_in_width);
    #line 1795 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    self->CF = CF_in -> value;  // update controller force
    // log_raw("IvPSimLatency", 50, (lf_time_physical_elapsed() - self->sim_start_time) / 1000000);
#line 16 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _plant_sensorreaction_function_1(void* instance_args) {
    _plant_sensor_self_t* self = (_plant_sensor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _plant_sensor_request_s1_t* request_s1 = self->_lf_request_s1;
    int request_s1_width = self->_lf_request_s1_width; SUPPRESS_UNUSED_WARNING(request_s1_width);
    _plant_sensor_request_s2_t* request_s2 = self->_lf_request_s2;
    int request_s2_width = self->_lf_request_s2_width; SUPPRESS_UNUSED_WARNING(request_s2_width);
    _plant_sensor_request_s3_t* request_s3 = self->_lf_request_s3;
    int request_s3_width = self->_lf_request_s3_width; SUPPRESS_UNUSED_WARNING(request_s3_width);
    _plant_sensor_request_s4_t* request_s4 = self->_lf_request_s4;
    int request_s4_width = self->_lf_request_s4_width; SUPPRESS_UNUSED_WARNING(request_s4_width);
    _plant_sensor_AP_out_t* AP_out = &self->_lf_AP_out;
    _plant_sensor_AV_out_t* AV_out = &self->_lf_AV_out;
    _plant_sensor_CP_out_t* CP_out = &self->_lf_CP_out;
    _plant_sensor_CV_out_t* CV_out = &self->_lf_CV_out;
    #line 1800 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src/inverted_pendulum.lf"
    double p_f = self->PF;       // controller force
    double c_f = self->CF;       // controller force
    
    // Alias current state
    double a_p = self->AP;
    double a_v = self->AV;
    double c_p = self->CP;
    double c_v = self->CV;
    double M = self->M;
    double m = self->m;
    double l = self->l;
    double g = self->g;
    double f_lin = self->LF;
    double f_ang = self->AF;
    double h = TIMESTEP; // time step
    
    // Compute the four derivatives for RK4
    double K1 = a_v;
    
    double L1 = (
            p_f * cos(a_p)
            - (M + m) * g * sin(a_p)
            + m * l * cos(a_p) * sin(a_p) * sqr(a_v)
            + f_lin * cos(a_p) * c_v
            + (M + m) * f_ang / m * a_v
        ) / (m * l * sqr(cos(a_p)) - (M + m) * l);
    
    double M1 = c_v;
    
    double N1 = (
            p_f
            + m * l * sin(a_p) * sqr(a_v)
            - m * g * cos(a_p) * sin(a_p)
            + cos(a_p) * f_ang * a_v
        ) / (M + m - m * sqr(cos(a_p)));
    
    double K2 = a_v + h / 2.0 * L1;
    
    double L2 = (
            (p_f + c_f) / 2.0 * cos(a_p + h / 2.0 * K1)
            - (M + m) * g * sin(a_p + h / 2.0 * K1)
            + m * l * cos(a_p + h / 2.0 * K1) * sin(a_p + h / 2.0
             * K1) * sqr(a_v + h / 2.0 * L1)
            + f_lin * cos(a_p + h / 2.0 * K1) * (c_v + h / 2.0 * N1)
            + (M + m) * f_ang / m * (a_v + h / 2.0 * L1)
        ) / (m * l * sqr(cos(a_p + h / 2.0 * K1)) - (M + m) * l);
    
    double M2 = c_v + h / 2.0 * N1;
    
    double N2 = (
            (p_f + c_f) / 2.0
            + m * l * sin(a_p + h / 2.0 * K1) * sqr(a_v + h / 2.0
                 * L1)
             - m * g * cos(a_p + h / 2.0 * K1) * sin(a_p + h / 2.0
                 * K1)
             + cos(a_p + h / 2.0 * K1) * f_ang * (a_v + h / 2.0 *
                 L1)
        ) / (M + m - m * sqr(cos(a_p + h / 2.0 * K1)));
    
    double K3 = a_v + h / 2.0 * L2;
    
    double L3 = (
            (p_f + c_f) / 2.0 * cos(a_p + h / 2.0 * K2)
            - (M + m) * g * sin(a_p + h / 2.0 * K2)
            + m * l * cos(a_p + h / 2.0 * K2) * sin(a_p + h / 2.0
                 * K2) * sqr(a_v + h / 2.0 * L2)
            + f_lin * cos(a_p + h / 2.0 * K2) * (c_v + h / 2.0 * N2)
            + (M + m) * f_ang/m * (a_v + h / 2.0 * L2)
        ) / (m * l * sqr(cos(a_p + h / 2.0 * K2)) - (M + m) * l);
    
    double M3 = c_v + h / 2.0 * N2;
    
    double N3 = (
            (p_f + c_f) / 2.0
            + m * l * sin(a_p
                          + h / 2.0 * K2) * sqr(a_v + h / 2.0 * L2)
            - m * g * cos(a_p + h / 2.0 * K2) * sin(a_p + h / 2.0
                 * K2)
            + cos(a_p + h / 2.0 * K2) * f_ang * (a_v + h / 2.0 *
                 L2)
        ) / (M + m - m*sqr(cos(a_p + h / 2.0 * K2)));
    
    double K4 = a_v + h * L3;
    
    double L4 = (
            p_f * cos(a_p + h * K3)
            - (M + m) * g * sin(a_p + h * K3)
            + m * l * cos(a_p + h * K3) * sin(a_p + h * K3) * sqr(
            a_v + h * L3)
            + f_lin * cos(a_p + h * K3) * (c_v + h * N3)
            + (M + m) * f_ang/m * (a_v + h * L3)
        ) / (m * l * sqr(cos(a_p + h * K3)) - (M + m) * l);
    
    double M4 = c_v + h * N3;
    
    double N4 = (
            p_f
            + m * l * sin(a_p + h * K3) * sqr(a_v + h * L3)
            - m * g * cos(a_p + h * K3) * sin(a_p + h * K3)
            + cos(a_p + h * K3) * f_ang * (a_v + h * L3)
        ) / (M + m - m*sqr(cos(a_p + h * K3)));
    
    self->AP = a_p + h * (1.0 / 6.0 * K1 + 2.0 / 6.0 * K2 + 2.0 / 6.0 * K3 +
                           1.0 / 6.0 * K4);
    self->AV = a_v + h * (1.0 / 6.0 * L1 + 2.0 / 6.0 * L2 + 2.0 / 6.0 * L3 +
                           1.0 / 6.0 * L4);
    self->CP = c_p + h * (1.0 / 6.0 * M1 + 2.0 / 6.0 * M2 + 2.0 / 6.0 * M3 +
                           1.0 / 6.0 * M4);
    self->CV = c_v + h * (1.0 / 6.0 * N1 + 2.0 / 6.0 * N2 + 2.0 / 6.0 * N3 +
                           1.0 / 6.0 * N4);
    
    // Publish updated values
    lf_set(AP_out, self->AP);
    // lf_print("Pendulum angle: %f, velocity: %f\n", self->AP, self->AV);
    lf_set(AV_out, self->AV);
    lf_set(CP_out, self->CP);
    lf_set(CV_out, self->CV);
    // lf_print("Cart position: %f, velocity: %f\n", self->CP, self->CV);
    
    
    self->PF = c_f; // update pendulum force
#line 156 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_plant_sensor.c"
}
#include "include/api/reaction_macros_undef.h"
_plant_sensor_self_t* new__plant_sensor() {
    _plant_sensor_self_t* self = (_plant_sensor_self_t*)lf_new_reactor(sizeof(_plant_sensor_self_t));
    // Set input by default to an always absent default input.
    self->_lf_request_s1 = &self->_lf_default__request_s1;
    // Set the default source reactor pointer
    self->_lf_default__request_s1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s2 = &self->_lf_default__request_s2;
    // Set the default source reactor pointer
    self->_lf_default__request_s2._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s3 = &self->_lf_default__request_s3;
    // Set the default source reactor pointer
    self->_lf_default__request_s3._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_request_s4 = &self->_lf_default__request_s4;
    // Set the default source reactor pointer
    self->_lf_default__request_s4._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_CF_in = &self->_lf_default__CF_in;
    // Set the default source reactor pointer
    self->_lf_default__CF_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _plant_sensorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _plant_sensorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__request_s1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s1_reactions[0] = &self->_lf__reaction_1;
    self->_lf__request_s1.reactions = &self->_lf__request_s1_reactions[0];
    self->_lf__request_s1.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_s1.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_s1.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s2_reactions[0] = &self->_lf__reaction_1;
    self->_lf__request_s2.reactions = &self->_lf__request_s2_reactions[0];
    self->_lf__request_s2.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_s2.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_s2.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s3_reactions[0] = &self->_lf__reaction_1;
    self->_lf__request_s3.reactions = &self->_lf__request_s3_reactions[0];
    self->_lf__request_s3.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_s3.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_s3.tmplt.type.element_size = sizeof(double);
    self->_lf__request_s4.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request_s4.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_s4_reactions[0] = &self->_lf__reaction_1;
    self->_lf__request_s4.reactions = &self->_lf__request_s4_reactions[0];
    self->_lf__request_s4.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request_s4.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request_s4.tmplt.type.element_size = sizeof(double);
    self->_lf__CF_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__CF_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__CF_in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__CF_in.reactions = &self->_lf__CF_in_reactions[0];
    self->_lf__CF_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__CF_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__CF_in.tmplt.type.element_size = sizeof(double);
    return self;
}
