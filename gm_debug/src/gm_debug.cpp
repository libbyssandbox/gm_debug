#include <GarrysMod/Lua/Interface.h>

#include <lua.hpp>
#include <lualib.h>

GMOD_MODULE_OPEN()
{
	luaopen_debug(LUA->GetState());

	return 0;
}

GMOD_MODULE_CLOSE()
{
	return 0;
}