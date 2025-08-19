#ifndef _INVERTED_PENDULUM_MAIN_H
#define _INVERTED_PENDULUM_MAIN_H
#include "include/core/reactor.h"
#include "_pi4.h"
#include "_pi1.h"
#include "_plant.h"
#include "_pi2.h"
#include "_pi3.h"
#include "_sensor.h"
#ifndef TOP_LEVEL_PREAMBLE_232886115_H
#define TOP_LEVEL_PREAMBLE_232886115_H
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
#include <stdio.h>

static int successful_reads = 0;
static int total_reads = 0;

static int successful_writes = 0;
static int total_writes = 0;

static FILE* _csv = NULL;
static void open_csv() {
    if (!_csv) {
        _csv = fopen("raw_timing_KVS.csv", "w");
        fprintf(_csv, "metric,period_ms,ms,successful_reads,total_reads,successful_writes,total_writes\n");
        fflush(_csv);
    }
}

static void log_raw(const char* metric, long long period_ms, long long delta, int sr, int tr, int sw, int tw) {
    open_csv();
    fprintf(_csv, "%s,%lld,%lld,%d,%d,%d,%d\n", metric, period_ms, delta,
            sr, tr, sw, tw);
    fflush(_csv);
}

static FILE* _csv2 = NULL;
static void open_csv2() {
    if (!_csv2) {
        _csv2 = fopen("raw_timing_IvPSim.csv", "w");
        fprintf(_csv2, "metric,period_ms,ms\n");
        fflush(_csv2);
    }
}

static void log_raw2(const char* metric, long long period_ms, long long delta) {
    open_csv2();
    fprintf(_csv2, "%s,%lld,%lld\n", metric, period_ms, delta);
    fflush(_csv2);
}

static void add_total_reads(int reads) {
    total_reads += reads;
}

static void add_successful_reads(int reads) {
    successful_reads += reads;
}

static void add_total_writes(int writes) {
    total_writes += writes;
}

static void add_successful_writes(int writes) {
    successful_writes += writes;
}


#define sqr(x) ((x)*(x))
#define MAX_VERSIONS 20
#define PUBLISHING_INTERVAL 10000000
#define TIMESTEP 0.05
#define TIME_PERIOD 50
#endif
typedef struct {
    struct self_base_t base;
#line 96 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_inverted_pendulum_main.h"
#line 97 "/mnt/c/Users/32739/LF/LF-InConcReTeS/src-gen/inverted_pendulum/_inverted_pendulum_main.h"
} _inverted_pendulum_main_main_self_t;
_inverted_pendulum_main_main_self_t* new__inverted_pendulum_main();
#endif // _INVERTED_PENDULUM_MAIN_H
