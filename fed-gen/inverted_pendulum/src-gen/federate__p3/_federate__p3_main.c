#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/federate__p3/federate__p3.h"
#include "_federate__p3_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__p3_main_main_self_t* new__federate__p3_main() {
    _federate__p3_main_main_self_t* self = (_federate__p3_main_main_self_t*)lf_new_reactor(sizeof(_federate__p3_main_main_self_t));

    return self;
}
