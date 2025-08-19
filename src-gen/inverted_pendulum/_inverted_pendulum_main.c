#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/inverted_pendulum/inverted_pendulum.h"
#include "_inverted_pendulum_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_inverted_pendulum_main_main_self_t* new__inverted_pendulum_main() {
    _inverted_pendulum_main_main_self_t* self = (_inverted_pendulum_main_main_self_t*)lf_new_reactor(sizeof(_inverted_pendulum_main_main_self_t));

    return self;
}
