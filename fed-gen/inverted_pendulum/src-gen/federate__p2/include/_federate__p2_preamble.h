#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/network/socket_common.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
interval_t _lf_action_delay_table[32];
lf_action_base_t* _lf_action_table[32];
size_t _lf_action_table_size = 32;
lf_action_base_t* _lf_zero_delay_cycle_action_table[32];
size_t _lf_zero_delay_cycle_action_table_size = 32;
reaction_t* network_input_reactions[32];
size_t num_network_input_reactions = 32;
reaction_t* port_absent_reaction[29];  // initialize to null pointers; see C99 6.7.8.10
size_t num_port_absent_reactions = 29;
#ifdef FEDERATED_DECENTRALIZED
    staa_t* staa_lst[1];
    size_t staa_lst_size = 1;

#endif // FEDERATED_DECENTRALIZED
void _lf_executable_preamble(environment_t* env) {
    
    // ***** Start initializing the federated execution. */
    // Initialize the socket mutexes
    lf_mutex_init(&lf_outbound_socket_mutex);
    init_shutdown_mutex();
    lf_cond_init(&lf_port_status_changed, &env->mutex);
    _fed.has_upstream  = true;
    _fed.has_downstream = true;
    _lf_my_fed_id = 5;
    _fed.number_of_inbound_p2p_connections = 0;
    _fed.number_of_outbound_p2p_connections = 0;
    // Initialize the array of socket for incoming connections to -1.
    for (int i = 0; i < NUMBER_OF_FEDERATES; i++) {
        _fed.sockets_for_inbound_p2p_connections[i] = -1;
    }
    // Initialize the array of socket for outgoing connections to -1.
    for (int i = 0; i < NUMBER_OF_FEDERATES; i++) {
        _fed.sockets_for_outbound_p2p_connections[i] = -1;
    }
    // Connect to the RTI. This sets _fed.socket_TCP_RTI and _lf_rti_socket_UDP.
    lf_connect_to_rti("10.34.167.169", 0);
    synchronize_initial_physical_clock_with_rti(&_fed.socket_TCP_RTI);
}
void staa_initialization() {
    #ifdef FEDERATED_DECENTRALIZED
    staa_lst[0] = (staa_t*) malloc(sizeof(staa_t));
    staa_lst[0]->STAA = 0;
    staa_lst[0]->num_actions = 32;
    staa_lst[0]->actions = (lf_action_base_t**) malloc(sizeof(lf_action_base_t*) * 32);
    staa_lst[0]->actions[0] = _lf_action_table[0];
    staa_lst[0]->actions[1] = _lf_action_table[1];
    staa_lst[0]->actions[2] = _lf_action_table[2];
    staa_lst[0]->actions[3] = _lf_action_table[3];
    staa_lst[0]->actions[4] = _lf_action_table[4];
    staa_lst[0]->actions[5] = _lf_action_table[5];
    staa_lst[0]->actions[6] = _lf_action_table[6];
    staa_lst[0]->actions[7] = _lf_action_table[7];
    staa_lst[0]->actions[8] = _lf_action_table[8];
    staa_lst[0]->actions[9] = _lf_action_table[9];
    staa_lst[0]->actions[10] = _lf_action_table[10];
    staa_lst[0]->actions[11] = _lf_action_table[11];
    staa_lst[0]->actions[12] = _lf_action_table[12];
    staa_lst[0]->actions[13] = _lf_action_table[13];
    staa_lst[0]->actions[14] = _lf_action_table[14];
    staa_lst[0]->actions[15] = _lf_action_table[15];
    staa_lst[0]->actions[16] = _lf_action_table[16];
    staa_lst[0]->actions[17] = _lf_action_table[17];
    staa_lst[0]->actions[18] = _lf_action_table[18];
    staa_lst[0]->actions[19] = _lf_action_table[19];
    staa_lst[0]->actions[20] = _lf_action_table[20];
    staa_lst[0]->actions[21] = _lf_action_table[21];
    staa_lst[0]->actions[22] = _lf_action_table[22];
    staa_lst[0]->actions[23] = _lf_action_table[23];
    staa_lst[0]->actions[24] = _lf_action_table[24];
    staa_lst[0]->actions[25] = _lf_action_table[25];
    staa_lst[0]->actions[26] = _lf_action_table[26];
    staa_lst[0]->actions[27] = _lf_action_table[27];
    staa_lst[0]->actions[28] = _lf_action_table[28];
    staa_lst[0]->actions[29] = _lf_action_table[29];
    staa_lst[0]->actions[30] = _lf_action_table[30];
    staa_lst[0]->actions[31] = _lf_action_table[31];
    
    #endif // FEDERATED_DECENTRALIZED
}
#define initialize_triggers_for_federate() \
do { \
    _lf_action_delay_table[0] = NEVER; \
    _lf_action_table[0] = (lf_action_base_t*)&federate__p2_nr_federate__p2_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_self[0]->_lf_networkMessage.source_id = 1; \
    _lf_zero_delay_cycle_action_table[0] = (lf_action_base_t*)&federate__p2_nr_federate__p2_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[1] = NEVER; \
    _lf_action_table[1] = (lf_action_base_t*)&federate__p2_nr_federate__p2_0_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_0_self[0]->_lf_networkMessage.source_id = 1; \
    _lf_zero_delay_cycle_action_table[1] = (lf_action_base_t*)&federate__p2_nr_federate__p2_0_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[2] = NEVER; \
    _lf_action_table[2] = (lf_action_base_t*)&federate__p2_nr_federate__p2_1_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_1_self[0]->_lf_networkMessage.source_id = 1; \
    _lf_zero_delay_cycle_action_table[2] = (lf_action_base_t*)&federate__p2_nr_federate__p2_1_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[3] = NEVER; \
    _lf_action_table[3] = (lf_action_base_t*)&federate__p2_nr_federate__p2_2_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_2_self[0]->_lf_networkMessage.source_id = 1; \
    _lf_zero_delay_cycle_action_table[3] = (lf_action_base_t*)&federate__p2_nr_federate__p2_2_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[4] = NEVER; \
    _lf_action_table[4] = (lf_action_base_t*)&federate__p2_nr_federate__p2_3_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_3_self[0]->_lf_networkMessage.source_id = 1; \
    _lf_zero_delay_cycle_action_table[4] = (lf_action_base_t*)&federate__p2_nr_federate__p2_3_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[5] = NEVER; \
    _lf_action_table[5] = (lf_action_base_t*)&federate__p2_nr_federate__p2_4_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_4_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[5] = (lf_action_base_t*)&federate__p2_nr_federate__p2_4_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[6] = NEVER; \
    _lf_action_table[6] = (lf_action_base_t*)&federate__p2_nr_federate__p2_5_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_5_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[6] = (lf_action_base_t*)&federate__p2_nr_federate__p2_5_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[7] = NEVER; \
    _lf_action_table[7] = (lf_action_base_t*)&federate__p2_nr_federate__p2_6_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_6_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[7] = (lf_action_base_t*)&federate__p2_nr_federate__p2_6_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[8] = NEVER; \
    _lf_action_table[8] = (lf_action_base_t*)&federate__p2_nr_federate__p2_7_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_7_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[8] = (lf_action_base_t*)&federate__p2_nr_federate__p2_7_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[9] = NEVER; \
    _lf_action_table[9] = (lf_action_base_t*)&federate__p2_nr_federate__p2_8_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_8_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[9] = (lf_action_base_t*)&federate__p2_nr_federate__p2_8_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[10] = NEVER; \
    _lf_action_table[10] = (lf_action_base_t*)&federate__p2_nr_federate__p2_9_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_9_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[10] = (lf_action_base_t*)&federate__p2_nr_federate__p2_9_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[11] = NEVER; \
    _lf_action_table[11] = (lf_action_base_t*)&federate__p2_nr_federate__p2_10_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_10_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[11] = (lf_action_base_t*)&federate__p2_nr_federate__p2_10_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[12] = NEVER; \
    _lf_action_table[12] = (lf_action_base_t*)&federate__p2_nr_federate__p2_11_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_11_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[12] = (lf_action_base_t*)&federate__p2_nr_federate__p2_11_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[13] = NEVER; \
    _lf_action_table[13] = (lf_action_base_t*)&federate__p2_nr_federate__p2_12_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_12_self[0]->_lf_networkMessage.source_id = 4; \
    _lf_zero_delay_cycle_action_table[13] = (lf_action_base_t*)&federate__p2_nr_federate__p2_12_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[14] = NEVER; \
    _lf_action_table[14] = (lf_action_base_t*)&federate__p2_nr_federate__p2_13_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_13_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[14] = (lf_action_base_t*)&federate__p2_nr_federate__p2_13_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[15] = NEVER; \
    _lf_action_table[15] = (lf_action_base_t*)&federate__p2_nr_federate__p2_14_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_14_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[15] = (lf_action_base_t*)&federate__p2_nr_federate__p2_14_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[16] = NEVER; \
    _lf_action_table[16] = (lf_action_base_t*)&federate__p2_nr_federate__p2_15_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_15_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[16] = (lf_action_base_t*)&federate__p2_nr_federate__p2_15_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[17] = NEVER; \
    _lf_action_table[17] = (lf_action_base_t*)&federate__p2_nr_federate__p2_16_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_16_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[17] = (lf_action_base_t*)&federate__p2_nr_federate__p2_16_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[18] = NEVER; \
    _lf_action_table[18] = (lf_action_base_t*)&federate__p2_nr_federate__p2_17_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_17_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[18] = (lf_action_base_t*)&federate__p2_nr_federate__p2_17_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[19] = NEVER; \
    _lf_action_table[19] = (lf_action_base_t*)&federate__p2_nr_federate__p2_18_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_18_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[19] = (lf_action_base_t*)&federate__p2_nr_federate__p2_18_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[20] = NEVER; \
    _lf_action_table[20] = (lf_action_base_t*)&federate__p2_nr_federate__p2_19_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_19_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[20] = (lf_action_base_t*)&federate__p2_nr_federate__p2_19_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[21] = NEVER; \
    _lf_action_table[21] = (lf_action_base_t*)&federate__p2_nr_federate__p2_20_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_20_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[21] = (lf_action_base_t*)&federate__p2_nr_federate__p2_20_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[22] = NEVER; \
    _lf_action_table[22] = (lf_action_base_t*)&federate__p2_nr_federate__p2_21_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_21_self[0]->_lf_networkMessage.source_id = 6; \
    _lf_zero_delay_cycle_action_table[22] = (lf_action_base_t*)&federate__p2_nr_federate__p2_21_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[23] = NEVER; \
    _lf_action_table[23] = (lf_action_base_t*)&federate__p2_nr_federate__p2_22_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_22_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[23] = (lf_action_base_t*)&federate__p2_nr_federate__p2_22_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[24] = NEVER; \
    _lf_action_table[24] = (lf_action_base_t*)&federate__p2_nr_federate__p2_23_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_23_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[24] = (lf_action_base_t*)&federate__p2_nr_federate__p2_23_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[25] = NEVER; \
    _lf_action_table[25] = (lf_action_base_t*)&federate__p2_nr_federate__p2_24_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_24_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[25] = (lf_action_base_t*)&federate__p2_nr_federate__p2_24_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[26] = NEVER; \
    _lf_action_table[26] = (lf_action_base_t*)&federate__p2_nr_federate__p2_25_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_25_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[26] = (lf_action_base_t*)&federate__p2_nr_federate__p2_25_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[27] = NEVER; \
    _lf_action_table[27] = (lf_action_base_t*)&federate__p2_nr_federate__p2_26_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_26_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[27] = (lf_action_base_t*)&federate__p2_nr_federate__p2_26_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[28] = NEVER; \
    _lf_action_table[28] = (lf_action_base_t*)&federate__p2_nr_federate__p2_27_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_27_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[28] = (lf_action_base_t*)&federate__p2_nr_federate__p2_27_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[29] = NEVER; \
    _lf_action_table[29] = (lf_action_base_t*)&federate__p2_nr_federate__p2_28_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_28_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[29] = (lf_action_base_t*)&federate__p2_nr_federate__p2_28_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[30] = NEVER; \
    _lf_action_table[30] = (lf_action_base_t*)&federate__p2_nr_federate__p2_29_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_29_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[30] = (lf_action_base_t*)&federate__p2_nr_federate__p2_29_self[0]->_lf_networkMessage; \
    _lf_action_delay_table[31] = NEVER; \
    _lf_action_table[31] = (lf_action_base_t*)&federate__p2_nr_federate__p2_30_self[0]->_lf_networkMessage; \
    federate__p2_nr_federate__p2_30_self[0]->_lf_networkMessage.source_id = 7; \
    _lf_zero_delay_cycle_action_table[31] = (lf_action_base_t*)&federate__p2_nr_federate__p2_30_self[0]->_lf_networkMessage; \
    staa_initialization(); \
} \
while (0)
/**
* Generated function that sends information about connections between this federate and
* other federates where messages are routed through the RTI. Currently, this
* only includes logical connections when the coordination is centralized. This
* information is needed for the RTI to perform the centralized coordination.
* @see MSG_TYPE_NEIGHBOR_STRUCTURE in net_common.h
*/
void lf_send_neighbor_structure_to_RTI(int rti_socket) {
    interval_t candidate_tmp;
    size_t buffer_size = 1 + 8 + 
                    4 * ( sizeof(uint16_t) + sizeof(int64_t) ) +
                    4 * sizeof(uint16_t);
    unsigned char buffer_to_send[buffer_size];
    
    size_t message_head = 0;
    buffer_to_send[message_head] = MSG_TYPE_NEIGHBOR_STRUCTURE;
    message_head++;
    encode_int32((int32_t)4, &(buffer_to_send[message_head]));
    message_head+=sizeof(int32_t);
    encode_int32((int32_t)4, &(buffer_to_send[message_head]));
    message_head+=sizeof(int32_t);
    encode_uint16((uint16_t)1, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16((uint16_t)4, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16((uint16_t)6, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16((uint16_t)7, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16(4, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    encode_uint16(6, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    encode_uint16(7, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    encode_uint16(8, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    write_to_socket_fail_on_error(
        &rti_socket, 
        buffer_size,
        buffer_to_send,
        NULL,
        "Failed to send the neighbor structure message to the RTI."
    );
}
