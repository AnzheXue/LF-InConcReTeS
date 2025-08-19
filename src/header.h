// common_types.h
#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <stdint.h>

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

    typedef struct {
        double value;
        uint64_t time;
    } version;

    #include <string.h>
    #include <math.h>

    #define sqr(x) ((x)*(x))
    #define MAX_VERSIONS 20
    #define PUBLISHING_INTERVAL 10000000

// any other structs, macros, etc.

#endif // COMMON_TYPES_H