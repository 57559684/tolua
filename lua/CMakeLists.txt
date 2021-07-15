cmake_minimum_required(VERSION 2.8)
project(lua)

set(LUA_SRC 
  lapi.c
  lapi.h
  lauxlib.c
  lauxlib.h
  lbaselib.c
  lcode.c
  lcode.h
  ldblib.c
  ldebug.c
  ldebug.h
  ldo.c
  ldo.h
  ldump.c
  lfunc.c
  lfunc.h
  lgc.c
  lgc.h
  linit.c
  liolib.c
  llex.c
  llex.h
  llimits.h
  lmathlib.c
  lmem.c
  lmem.h
  loadlib.c
  lobject.c
  lobject.h
  lopcodes.c
  lopcodes.h
  loslib.c
  lparser.c
  lparser.h
  lstate.c
  lstate.h
  lstring.c
  lstring.h
  lstrlib.c
  ltable.c
  ltable.h
  ltablib.c
  ltm.c
  ltm.h
  lua.c
  lua.h
  lua.hpp
  luaconf.h
  lualib.h
  lundump.c
  lundump.h
  lvm.c
  lvm.h
  lzio.c
  lzio.h
  print.c
)

add_library(lua STATIC
  ${LUA_SRC}
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

set_target_properties(lua
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
