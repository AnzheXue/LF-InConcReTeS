
cmake_minimum_required(VERSION 3.19)
project(federate__p3 LANGUAGES C)

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
set(FEDERATE_ID 6 CACHE STRING "")
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

set(LF_MAIN_TARGET federate__p3)

# Declare a new executable target and list all its sources
add_executable(
    ${LF_MAIN_TARGET}
    lib/schedule.c
    _federate__p3_main.c
    _pi3.c
    _app.c
    _reader.c
    _compute.c
    _writer.c
    _actuator.c
    __lf_gendelay_e5b7a7c0.c
    __lf_gendelay_bb7c8d20.c
    __lf_gendelay_91417280.c
    _published_store.c
    _unpublished_store.c
    _eigtree.c
    _eigtree0.c
    _eigtree1.c
    _eigtree2.c
    _eigtreereduction.c
    __lf_gendelay_497972d5.c
    __lf_gendelay_d26602f5.c
    __lf_gendelay_b53dc995.c
    __lf_gendelay_98159035.c
    __lf_gendelay_1e4a0475.c
    __lf_gendelay_121cb15.c
    __lf_gendelay_e3f991b5.c
    __lf_gendelay_c6d15855.c
    __lf_gendelay_a9a91ef5.c
    __lf_gendelay_8c80e595.c
    __lf_gendelay_e8c45075.c
    __lf_gendelay_3f93e9d5.c
    __lf_gendelay_226bb075.c
    __lf_gendelay_5437715.c
    __lf_gendelay_74236af5.c
    __lf_gendelay_56fb3195.c
    __lf_gendelay_39d2f835.c
    __lf_gendelay_1caabed5.c
    __lf_gendelay_ff828575.c
    __lf_gendelay_7e0d9735.c
    __lf_gendelay_d494d903.c
    __lf_gendelay_cf1c7f8c.c
    __lf_gendelay_a9769243.c
    __lf_gendelay_c09b4001.c
    __lf_gendelay_d7bfedbf.c
    __lf_gendelay_f6554abb.c
    __lf_gendelay_da7482d5.c
    __lf_gendelay_f1993093.c
    __lf_gendelay_8bdde51.c
    __lf_gendelay_db3d058b.c
    __lf_gendelay_f261b349.c
    __lf_gendelay_9866107.c
    __lf_gendelay_20ab0ec5.c
    __lf_gendelay_37cfbc83.c
    __lf_gendelay_4ef46a41.c
    __lf_gendelay_217da8d8.c
    __lf_gendelay_7d47dd1a.c
    __lf_gendelay_946c8ad8.c
    __lf_gendelay_ab913896.c
    __lf_gendelay_fd20b56a.c
    __lf_gendelay_e05932c2.c
    __lf_gendelay_3c236704.c
    __lf_gendelay_534814c2.c
    __lf_gendelay_6a6cc280.c
    __lf_gendelay_1a48eeca.c
    __lf_gendelay_c4eeea82.c
    __lf_gendelay_20b91ec4.c
    __lf_gendelay_37ddcc82.c
    __lf_gendelay_4f027a40.c
    __lf_gendelay_9bbddd0a.c
    __lf_gendelay_c8df2879.c
    __lf_gendelay_70302db7.c
    __lf_gendelay_178132f5.c
    __lf_gendelay_bed23833.c
    _networksender_0_0.c
    _networksender_1_1.c
    _networkreceiver_12.c
    _networkreceiver_13.c
    _networkreceiver_14.c
    _networkreceiver_15.c
    _networkreceiver_17.c
    __p3ap_in.c
    __p3av_in.c
    __p3cp_in.c
    __p3cv_in.c
    __p3sim_start_time.c
    federate__p3.c
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

include("federate__p3_extension.cmake")

# Define directory in which files from the 'files' target directive will be put.
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC LF_TARGET_FILES_DIRECTORY="${CMAKE_CURRENT_LIST_DIR}")


