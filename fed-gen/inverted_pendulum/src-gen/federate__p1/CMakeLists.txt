
cmake_minimum_required(VERSION 3.19)
project(federate__p1 LANGUAGES C)

if(CMAKE_BUILD_TYPE STREQUAL "Test")
  set(CMAKE_BUILD_TYPE "Debug")
  if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    find_program(LCOV_BIN lcov)
    if(LCOV_BIN MATCHES "lcov$")
      set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage -fprofile-arcs -ftest-coverage")
    else()
      message("Not producing code coverage information since lcov was not found")
    endif()
  else()
    message("Not producing code coverage information since the selected compiler is no gcc")
  endif()
endif()
# Require C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(DEFAULT_BUILD_TYPE Debug)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE ${DEFAULT_BUILD_TYPE} CACHE STRING "Choose the type of build." FORCE)
endif()

# Do not print install messages
set(CMAKE_INSTALL_MESSAGE NEVER)
# Colorize compilation output
set(CMAKE_COLOR_DIAGNOSTICS ON)

# Do not clear runtime path of the executable when installing it
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)


# Set default values for build parameters
set(LF_REACTION_GRAPH_BREADTH 136 CACHE STRING "")
set(EXECUTABLE_PREAMBLE TRUE CACHE STRING "")
set(NUMBER_OF_FEDERATES 9 CACHE STRING "")
set(FEDERATE_ID 4 CACHE STRING "")
set(FEDERATED TRUE CACHE STRING "")
set(LF_CLOCK_SYNC 2 CACHE STRING "")
set(_LF_FEDERATE_NAMES_COMMA_SEPARATED \"federate__s1,federate__s2,federate__s3,federate__s4,federate__p1,federate__p2,federate__p3,federate__p4,federate__plant\" CACHE STRING "")
set(_LF_CLOCK_SYNC_EXCHANGES_PER_INTERVAL 10 CACHE STRING "")
set(NUMBER_OF_WATCHDOGS 0 CACHE STRING "")
set(LF_TRACE TRUE CACHE STRING "")
set(NUMBER_OF_WORKERS 0 CACHE STRING "")
set(_LF_CLOCK_SYNC_PERIOD_NS 5000000 CACHE STRING "")
set(SCHEDULER SCHED_NP CACHE STRING "")
set(_LF_CLOCK_SYNC_ATTENUATION 10 CACHE STRING "")
set(_LF_CLOCK_SYNC_COLLECT_STATS TRUE CACHE STRING "")
set(FEDERATED_CENTRALIZED TRUE CACHE STRING "")
set(LOG_LEVEL 2 CACHE STRING "")
set(_LF_CLOCK_SYNC_INITIAL TRUE CACHE STRING "")
set(LF_TRACE_PLUGIN  CACHE STRING "")
add_subdirectory(core)

set(LF_MAIN_TARGET federate__p1)

# Declare a new executable target and list all its sources
add_executable(
    ${LF_MAIN_TARGET}
    lib/schedule.c
    _federate__p1_main.c
    _pi1.c
    _app.c
    _reader.c
    _compute.c
    _writer.c
    _actuator.c
    __lf_gendelay_bbee423e.c
    __lf_gendelay_91b3279e.c
    __lf_gendelay_67780cfe.c
    _published_store.c
    _unpublished_store.c
    _eigtree.c
    _eigtree0.c
    _eigtree1.c
    _eigtree2.c
    _eigtreereduction.c
    __lf_gendelay_3a162817.c
    __lf_gendelay_c302b837.c
    __lf_gendelay_a5da7ed7.c
    __lf_gendelay_88b24577.c
    __lf_gendelay_ee6b9b7.c
    __lf_gendelay_f1be8057.c
    __lf_gendelay_d49646f7.c
    __lf_gendelay_b76e0d97.c
    __lf_gendelay_9a45d437.c
    __lf_gendelay_7d1d9ad7.c
    __lf_gendelay_d96105b7.c
    __lf_gendelay_30309f17.c
    __lf_gendelay_130865b7.c
    __lf_gendelay_f5e02c57.c
    __lf_gendelay_64c02037.c
    __lf_gendelay_4797e6d7.c
    __lf_gendelay_2a6fad77.c
    __lf_gendelay_d477417.c
    __lf_gendelay_f01f3ab7.c
    __lf_gendelay_6eaa4c77.c
    __lf_gendelay_c5318e45.c
    __lf_gendelay_bfb934ce.c
    __lf_gendelay_9a134785.c
    __lf_gendelay_b137f543.c
    __lf_gendelay_c85ca301.c
    __lf_gendelay_e6f1fffd.c
    __lf_gendelay_cb113817.c
    __lf_gendelay_e235e5d5.c
    __lf_gendelay_f95a9393.c
    __lf_gendelay_cbd9bacd.c
    __lf_gendelay_e2fe688b.c
    __lf_gendelay_fa231649.c
    __lf_gendelay_1147c407.c
    __lf_gendelay_286c71c5.c
    __lf_gendelay_3f911f83.c
    __lf_gendelay_121a5e1a.c
    __lf_gendelay_6de4925c.c
    __lf_gendelay_8509401a.c
    __lf_gendelay_9c2dedd8.c
    __lf_gendelay_edbd6aac.c
    __lf_gendelay_d0f5e804.c
    __lf_gendelay_2cc01c46.c
    __lf_gendelay_43e4ca04.c
    __lf_gendelay_5b0977c2.c
    __lf_gendelay_ae5a40c.c
    __lf_gendelay_b58b9fc4.c
    __lf_gendelay_1155d406.c
    __lf_gendelay_287a81c4.c
    __lf_gendelay_3f9f2f82.c
    __lf_gendelay_8c5a924c.c
    __lf_gendelay_e04c463b.c
    __lf_gendelay_879d4b79.c
    __lf_gendelay_2eee50b7.c
    __lf_gendelay_d63f55f5.c
    _networksender_0_0.c
    _networksender_1_1.c
    _networkreceiver_0.c
    _networkreceiver_1.c
    _networkreceiver_2.c
    _networkreceiver_3.c
    _networkreceiver_5.c
    __p1ap_in.c
    __p1av_in.c
    __p1cp_in.c
    __p1cv_in.c
    __p1sim_start_time.c
    federate__p1.c
)

find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
  target_link_libraries(${LF_MAIN_TARGET} PUBLIC ${MATH_LIBRARY})
endif()
target_link_libraries(${LF_MAIN_TARGET} PRIVATE reactor-c)
target_include_directories(${LF_MAIN_TARGET} PUBLIC .)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/api)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/platform)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/modal_models)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/utils)

# Find threads and link to it
find_package(Threads REQUIRED)
target_link_libraries(${LF_MAIN_TARGET} PRIVATE Threads::Threads)

# Set the number of workers to enable threading/tracing
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC NUMBER_OF_WORKERS=0)


    install(
        TARGETS ${LF_MAIN_TARGET}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )

include("federate__p1_extension.cmake")

# Define directory in which files from the 'files' target directive will be put.
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC LF_TARGET_FILES_DIRECTORY="${CMAKE_CURRENT_LIST_DIR}")


