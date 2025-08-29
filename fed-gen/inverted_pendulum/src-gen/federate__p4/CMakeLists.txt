
cmake_minimum_required(VERSION 3.19)
project(federate__p4 LANGUAGES C)

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
set(FEDERATE_ID 7 CACHE STRING "")
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

set(LF_MAIN_TARGET federate__p4)

# Declare a new executable target and list all its sources
add_executable(
    ${LF_MAIN_TARGET}
    lib/schedule.c
    _federate__p4_main.c
    _pi4.c
    _app.c
    _reader.c
    _compute.c
    _writer.c
    _actuator.c
    __lf_gendelay_7a9c5a81.c
    __lf_gendelay_50613fe1.c
    __lf_gendelay_26262541.c
    _published_store.c
    _unpublished_store.c
    _eigtree.c
    _eigtree0.c
    _eigtree1.c
    _eigtree2.c
    _eigtreereduction.c
    __lf_gendelay_512b1834.c
    __lf_gendelay_da17a854.c
    __lf_gendelay_bcef6ef4.c
    __lf_gendelay_9fc73594.c
    __lf_gendelay_25fba9d4.c
    __lf_gendelay_8d37074.c
    __lf_gendelay_ebab3714.c
    __lf_gendelay_ce82fdb4.c
    __lf_gendelay_b15ac454.c
    __lf_gendelay_94328af4.c
    __lf_gendelay_f075f5d4.c
    __lf_gendelay_47458f34.c
    __lf_gendelay_2a1d55d4.c
    __lf_gendelay_cf51c74.c
    __lf_gendelay_7bd51054.c
    __lf_gendelay_5eacd6f4.c
    __lf_gendelay_41849d94.c
    __lf_gendelay_245c6434.c
    __lf_gendelay_7342ad4.c
    __lf_gendelay_85bf3c94.c
    __lf_gendelay_dc467e62.c
    __lf_gendelay_d6ce24eb.c
    __lf_gendelay_b12837a2.c
    __lf_gendelay_c84ce560.c
    __lf_gendelay_df71931e.c
    __lf_gendelay_fe06f01a.c
    __lf_gendelay_e2262834.c
    __lf_gendelay_f94ad5f2.c
    __lf_gendelay_106f83b0.c
    __lf_gendelay_e2eeaaea.c
    __lf_gendelay_fa1358a8.c
    __lf_gendelay_11380666.c
    __lf_gendelay_285cb424.c
    __lf_gendelay_3f8161e2.c
    __lf_gendelay_56a60fa0.c
    __lf_gendelay_292f4e37.c
    __lf_gendelay_84f98279.c
    __lf_gendelay_9c1e3037.c
    __lf_gendelay_b342ddf5.c
    __lf_gendelay_4d25ac9.c
    __lf_gendelay_e80ad821.c
    __lf_gendelay_43d50c63.c
    __lf_gendelay_5af9ba21.c
    __lf_gendelay_721e67df.c
    __lf_gendelay_21fa9429.c
    __lf_gendelay_cca08fe1.c
    __lf_gendelay_286ac423.c
    __lf_gendelay_3f8f71e1.c
    __lf_gendelay_56b41f9f.c
    __lf_gendelay_a36f8269.c
    __lf_gendelay_bd289998.c
    __lf_gendelay_64799ed6.c
    __lf_gendelay_bcaa414.c
    __lf_gendelay_b31ba952.c
    _networksender_0_0.c
    _networksender_1_1.c
    _networkreceiver_18.c
    _networkreceiver_19.c
    _networkreceiver_20.c
    _networkreceiver_21.c
    _networkreceiver_23.c
    __p4ap_in.c
    __p4av_in.c
    __p4cp_in.c
    __p4cv_in.c
    __p4sim_start_time.c
    federate__p4.c
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

include("federate__p4_extension.cmake")

# Define directory in which files from the 'files' target directive will be put.
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC LF_TARGET_FILES_DIRECTORY="${CMAKE_CURRENT_LIST_DIR}")


