
# required minimum version
cmake_minimum_required(VERSION 3.18.4)
# module path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/../cmake) # main (top) cmake dir
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake) # project specific cmake dir
# project name and version
project(glue LANGUAGES)

if (NOT ${PROJECT_NAME}-MultiBuild)
  include(ExternalProject)

  macro (setup_library library_name output_path parameter)
    string(REGEX REPLACE "/" "-" builder_name "${library_name}")
    ExternalProject_Add(${builder_name}-builder
      SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}"
      CMAKE_ARGS
        -DLIBNAME=${builder_name}
        -DPARAMETER=${parameter}
        -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/out/${output_path}
        -D${PROJECT_NAME}-MultiBuild=ON
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
        -DCMAKE_ASM-ATT_COMPILER=${CMAKE_ASM-ATT_COMPILER}
    )
  endmacro()

  # get compiled multilib support
  execute_process(COMMAND ${CMAKE_C_COMPILER} "--print-multi-lib" OUTPUT_VARIABLE multilib )
  # escape semicolon and replace newline by semicolon for line iteration
  string(REGEX REPLACE ";" "\\\\;" multilib "${multilib}")
  string(REGEX REPLACE "\n" ";" multilib "${multilib}")

  # handle empty ( build for current gcc )
  if("${multilib}" STREQUAL "")
    # enable languages
    ENABLE_LANGUAGE(ASM-ATT)
    ENABLE_LANGUAGE(C)
    # setup library
    setup_library(${PROJECT_NAME} "" "")
  endif()

  # iterate over lines
  foreach(line ${multilib})
    # prepare line to list
    string(REGEX REPLACE "\\\\;" ";" line_inner "${line}")
    # get output folder
    list(GET line_inner 0 output)
    # get configuration
    list(GET line_inner 1 conf)
    # skip dot
    if("." STREQUAL ${output})
      continue()
    endif()
    # tidy up conf to command line arguments
    string(REGEX REPLACE "@" " -" conf "${conf}")
    # build project in sub project
    setup_library(${PROJECT_NAME}-${output} ${output} ${conf})
  endforeach(line)

  return()
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${PARAMETER}")
set(CMAKE_ASM-ATT_FLAGS "${CMAKE_ASM_FLAGS} ${PARAMETER}")

# enable languages
ENABLE_LANGUAGE(ASM-ATT)
ENABLE_LANGUAGE(C)

# source and include files
SET(SOURCE_FILE
  source/dummy.c
)
SET(INCLUDE_FILE
)

# Add library sources
if(SHARED_BUILD)
  add_library(${LIBNAME} SHARED ${SOURCE_FILE})
else()
  add_library(${LIBNAME} STATIC ${SOURCE_FILE})
endif(SHARED_BUILD)
set_target_properties(${LIBNAME} PROPERTIES OUTPUT_NAME "glue")
install(TARGETS ${LIBNAME})
