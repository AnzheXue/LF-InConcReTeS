#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__a/federate__a.h"
#include "_federate__a_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__a_main_main_self_t* new__federate__a_main() {
    _federate__a_main_main_self_t* self = (_federate__a_main_main_self_t*)lf_new_reactor(sizeof(_federate__a_main_main_self_t));

    return self;
}
