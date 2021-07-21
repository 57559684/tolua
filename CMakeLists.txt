cmake_minimum_required(VERSION 2.8)
project(tolua++)

set(TOLUA_SRC 
  tolua/tolua++.h
  tolua/tolua_event.h
  tolua/tolua_event.c
  tolua/tolua_fix.h
  tolua/tolua_fix.c
  tolua/toluabind.h
  tolua/toluabind.c
  tolua/tolua_is.c
  tolua/tolua_map.c
  tolua/tolua_push.c
  tolua/tolua_to.c
  tolua/tolua.c
)

set(TOLUA_LIB
  tolua/tolua++.h
  tolua/tolua_event.h
  tolua/tolua_event.c
  tolua/tolua_fix.h
  tolua/tolua_fix.c
  tolua/tolua_is.c
  tolua/tolua_map.c
  tolua/tolua_push.c
  tolua/tolua_to.c
)

include_directories(
  lua
)

add_library(tolua STATIC
  ${TOLUA_LIB}
)

set_target_properties(tolua
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)


if (MSVC)
    set(CompilerFlags
        CMAKE_CXX_FLAGS
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_C_FLAGS
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        )
    foreach(CompilerFlag ${CompilerFlags})
        string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
    endforeach()
endif(MSVC)

add_subdirectory(lua)
add_executable(tolua++ ${TOLUA_SRC})
target_link_libraries(tolua lua)
target_link_libraries(tolua++ lua)

