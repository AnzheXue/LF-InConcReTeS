#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p2/federate__p2.h"
#include "_federate__p2_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__p2_main_main_self_t* new__federate__p2_main() {
    _federate__p2_main_main_self_t* self = (_federate__p2_main_main_self_t*)lf_new_reactor(sizeof(_federate__p2_main_main_self_t));

    return self;
}
