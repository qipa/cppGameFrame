
#include "LuaMyLibs.h"

#include "LuaLog.h"
#include "LuaMySql.h"
#include "LuaPB.h"
#include "LuaRedis.h"
#include "LuaWK.h"

static const luaL_Reg lualibs[] =
{
  {"pb", LuaPB::openlib},
  {"wk", LuaWK::openlib},
  {"redis", LuaRedis::openlib},
  {"log", LuaLog::openlib},
  {"mysql", LuaMySql::openlib},
  {NULL, NULL}
};


void LuaMyLibs::openmylibs(lua_State *L)
{
  const luaL_Reg *lib = lualibs;
  for (; lib->func; lib++)
  {
    lua_pushcfunction(L, lib->func);
    lua_pushstring(L, lib->name);
    lua_call(L, 1, 0);
  }
}
