
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
set(LF_REACTION_GRAPH_BREADTH 10 CACHE STRING "")
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
    __lf_gendelay_3189243e.c
    __lf_gendelay_74e099e.c
    __lf_gendelay_dd12eefe.c
    _published_store.c
    _unpublished_store.c
    _eigtree.c
    _eigtree0.c
    _eigtree1.c
    _eigtree2.c
    _eigtreereduction.c
    __lf_gendelay_a5f3672c.c
    __lf_gendelay_c31ba08c.c
    __lf_gendelay_e043d9ec.c
    _networksender_0_0.c
    _networksender_1_1.c
    _networksender_2_2.c
    _networksender_3_3.c
    _networksender_4_4.c
    _networksender_5_5.c
    _networksender_6_6.c
    _networksender_7_7.c
    _networksender_8_8.c
    _networksender_9_9.c
    _networksender_10_10.c
    _networksender_11_11.c
    _networksender_12_12.c
    _networksender_13_13.c
    _networksender_14_14.c
    _networksender_15_15.c
    _networksender_16_16.c
    _networksender_17_17.c
    _networksender_18_18.c
    _networksender_19_19.c
    _networksender_20_20.c
    _networksender_21_21.c
    _networksender_22_22.c
    _networksender_23_23.c
    _networksender_24_24.c
    _networksender_25_25.c
    _networksender_26_26.c
    _networksender_27_27.c
    _networksender_28_28.c
    _networkreceiver_0.c
    _networkreceiver_1.c
    _networkreceiver_2.c
    _networkreceiver_3.c
    _networkreceiver_5.c
    _networkreceiver_53.c
    _networkreceiver_58.c
    _networkreceiver_60.c
    _networkreceiver_62.c
    _networkreceiver_67.c
    _networkreceiver_69.c
    _networkreceiver_71.c
    _networkreceiver_76.c
    _networkreceiver_78.c
    _networkreceiver_82.c
    _networkreceiver_87.c
    _networkreceiver_89.c
    _networkreceiver_91.c
    _networkreceiver_96.c
    _networkreceiver_98.c
    _networkreceiver_100.c
    _networkreceiver_105.c
    _networkreceiver_107.c
    _networkreceiver_111.c
    _networkreceiver_116.c
    _networkreceiver_118.c
    _networkreceiver_120.c
    _networkreceiver_125.c
    _networkreceiver_127.c
    _networkreceiver_129.c
    _networkreceiver_134.c
    _networkreceiver_136.c
    __p1ap_in.c
    __p1av_in.c
    __p1cp_in.c
    __p1cv_in.c
    __p1e1_p1_in.c
    __p1e1_p2_in.c
    __p1e1_p3_in.c
    __p1e1_p1p2_in.c
    __p1e1_p1p3_in.c
    __p1e1_p2p1_in.c
    __p1e1_p2p3_in.c
    __p1e1_p3p1_in.c
    __p1e1_p3p2_in.c
    __p1e2_p1_in.c
    __p1e2_p2_in.c
    __p1e2_p3_in.c
    __p1e2_p1p2_in.c
    __p1e2_p1p3_in.c
    __p1e2_p2p1_in.c
    __p1e2_p2p3_in.c
    __p1e2_p3p1_in.c
    __p1e2_p3p2_in.c
    __p1e3_p1_in.c
    __p1e3_p2_in.c
    __p1e3_p3_in.c
    __p1e3_p1p2_in.c
    __p1e3_p1p3_in.c
    __p1e3_p2p1_in.c
    __p1e3_p2p3_in.c
    __p1e3_p3p1_in.c
    __p1e3_p3p2_in.c
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


