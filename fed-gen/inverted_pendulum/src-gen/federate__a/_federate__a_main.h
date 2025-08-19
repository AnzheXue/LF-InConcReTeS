#ifndef _FEDERATE__A_MAIN_H
#define _FEDERATE__A_MAIN_H
#include "include/core/reactor.h"
#include "_networkreceiver_127.h"
#include "__ap4_force.h"
#include "_networkreceiver_99.h"
#include "_networkreceiver_43.h"
#include "_actuator.h"
#include "__ap2_force.h"
#include "__ap3_force.h"
#include "_networkreceiver_71.h"
#include "__ap1_force.h"
#ifndef TOP_LEVEL_PREAMBLE_1869219801_H
#define TOP_LEVEL_PREAMBLE_1869219801_H
typedef struct {
    char key[32 + 1];
    double value;
    uint64_t time;
} tuple;

typedef struct {
    double value;
    int count;
    int first_index;
} tally;

#include <string.h>
#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/network/socket_common.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
#endif
typedef struct {
    struct self_base_t base;
#line 46 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__a/_federate__a_main.h"
#line 47 "/mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen/federate__a/_federate__a_main.h"
} _federate__a_main_main_self_t;
_federate__a_main_main_self_t* new__federate__a_main();
#endif // _FEDERATE__A_MAIN_H
