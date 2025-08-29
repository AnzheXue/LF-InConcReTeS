
cmake_minimum_required(VERSION 3.19)
project(federate__p2 LANGUAGES C)

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
set(FEDERATE_ID 5 CACHE STRING "")
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

set(LF_MAIN_TARGET federate__p2)

# Declare a new executable target and list all its sources
add_executable(
    ${LF_MAIN_TARGET}
    lib/schedule.c
    _federate__p2_main.c
    _pi2.c
    _app.c
    _reader.c
    _compute.c
    _writer.c
    _actuator.c
    __lf_gendelay_50d2f4ff.c
    __lf_gendelay_2697da5f.c
    __lf_gendelay_fc5cbfbf.c
    _published_store.c
    _unpublished_store.c
    _eigtree.c
    _eigtree0.c
    _eigtree1.c
    _eigtree2.c
    _eigtreereduction.c
    __lf_gendelay_41c7cd76.c
    __lf_gendelay_cab45d96.c
    __lf_gendelay_ad8c2436.c
    __lf_gendelay_9063ead6.c
    __lf_gendelay_16985f16.c
    __lf_gendelay_f97025b6.c
    __lf_gendelay_dc47ec56.c
    __lf_gendelay_bf1fb2f6.c
    __lf_gendelay_a1f77996.c
    __lf_gendelay_84cf4036.c
    __lf_gendelay_e112ab16.c
    __lf_gendelay_37e24476.c
    __lf_gendelay_1aba0b16.c
    __lf_gendelay_fd91d1b6.c
    __lf_gendelay_6c71c596.c
    __lf_gendelay_4f498c36.c
    __lf_gendelay_322152d6.c
    __lf_gendelay_14f91976.c
    __lf_gendelay_f7d0e016.c
    __lf_gendelay_765bf1d6.c
    __lf_gendelay_cce333a4.c
    __lf_gendelay_c76ada2d.c
    __lf_gendelay_a1c4ece4.c
    __lf_gendelay_b8e99aa2.c
    __lf_gendelay_d00e4860.c
    __lf_gendelay_eea3a55c.c
    __lf_gendelay_d2c2dd76.c
    __lf_gendelay_e9e78b34.c
    __lf_gendelay_10c38f2.c
    __lf_gendelay_d38b602c.c
    __lf_gendelay_eab00dea.c
    __lf_gendelay_1d4bba8.c
    __lf_gendelay_18f96966.c
    __lf_gendelay_301e1724.c
    __lf_gendelay_4742c4e2.c
    __lf_gendelay_19cc0379.c
    __lf_gendelay_759637bb.c
    __lf_gendelay_8cbae579.c
    __lf_gendelay_a3df9337.c
    __lf_gendelay_f56f100b.c
    __lf_gendelay_d8a78d63.c
    __lf_gendelay_3471c1a5.c
    __lf_gendelay_4b966f63.c
    __lf_gendelay_62bb1d21.c
    __lf_gendelay_1297496b.c
    __lf_gendelay_bd3d4523.c
    __lf_gendelay_19077965.c
    __lf_gendelay_302c2723.c
    __lf_gendelay_4750d4e1.c
    __lf_gendelay_940c37ab.c
    __lf_gendelay_d495b75a.c
    __lf_gendelay_7be6bc98.c
    __lf_gendelay_2337c1d6.c
    __lf_gendelay_ca88c714.c
    _networksender_0_0.c
    _networksender_1_1.c
    _networkreceiver_6.c
    _networkreceiver_7.c
    _networkreceiver_8.c
    _networkreceiver_9.c
    _networkreceiver_11.c
    __p2ap_in.c
    __p2av_in.c
    __p2cp_in.c
    __p2cv_in.c
    __p2sim_start_time.c
    federate__p2.c
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

include("federate__p2_extension.cmake")

# Define directory in which files from the 'files' target directive will be put.
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC LF_TARGET_FILES_DIRECTORY="${CMAKE_CURRENT_LIST_DIR}")


