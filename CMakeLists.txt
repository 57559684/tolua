cmake_minimum_required(VERSION 2.8)
project(tolua)

set(TOLUA_SRC 
  tolua++.h
  tolua_event.h
  tolua_event.c
  tolua_fix.h
  tolua_fix.c
  toluabind.h
  toluabind.c
  tolua_is.c
  tolua_map.c
  tolua_push.c
  tolua_to.c
  tolua.c
)

include_directories(
  lua
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
add_executable(tolua ${TOLUA_SRC})
target_link_libraries(tolua lua)

