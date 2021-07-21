/*
** Lua binding: helloxx
** Generated automatically by tolua++-1.0.93 on 07/21/21 17:22:43.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_helloxx_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_void (lua_State* tolua_S)
{
 void* self = (void*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_ (lua_State* tolua_S)
{
 * self = (*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* method: new of class  hello */
#ifndef TOLUA_DISABLE_tolua_helloxx_hello_new00
static int tolua_helloxx_hello_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   hello* tolua_ret = (hello*)  new hello();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"hello");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  hello */
#ifndef TOLUA_DISABLE_tolua_helloxx_hello_new00_local
static int tolua_helloxx_hello_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   hello* tolua_ret = (hello*)  new hello();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"hello");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  hello */
#ifndef TOLUA_DISABLE_tolua_helloxx_hello_delete00
static int tolua_helloxx_hello_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 * self = (*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: say_hello of class  hello */
#ifndef TOLUA_DISABLE_tolua_helloxx_hello_say_hello00
static int tolua_helloxx_hello_say_hello00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 * self = (*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'say_hello'",NULL);
#endif
  {
   self->say_hello();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'say_hello'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_helloxx_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"hello","","",tolua_collect_);
  #else
  tolua_cclass(tolua_S,"hello","","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"hello");
   tolua_function(tolua_S,"new",tolua_helloxx_hello_new00);
   tolua_function(tolua_S,"new_local",tolua_helloxx_hello_new00_local);
   tolua_function(tolua_S,".call",tolua_helloxx_hello_new00_local);
   tolua_function(tolua_S,"delete",tolua_helloxx_hello_delete00);
   tolua_function(tolua_S,"say_hello",tolua_helloxx_hello_say_hello00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_helloxx (lua_State* tolua_S) {
 return tolua_helloxx_open(tolua_S);
};
#endif

