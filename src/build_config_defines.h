#pragma once

// SCRIPTS:
//#define MOUSE_MOVE_CALLBACK // expose mouse move callback to scripts (configure in bind_stalker)
//#define KEY_RELEASE_CALLBACK // expose key release callback to scripts (configure in bind_stalker)
//#define KEY_HOLD_CALLBACK // expose key hold callback to scripts (configure in bind_stalker)
/*** DEPRECATED as redundant, all engine lua output is being saved into main log now. Do not use as it will be removed
#define LUA_DEBUG_PRINT // allow output of lua logs (*_lua.log)
***/
//-SCRIPTS

// CORE:
#define SPAWN_ANTIFREEZE // spread spawn of game objects thoughout multiple frames to prevent lags (by alpet)
#define NON_FATAL_VERIFY // don't crash game when VERIFY fails
//#define USE_LUAJIT_ONE // LuaJit 1.1.8. Dont forget to change build configuration to $(Configuration)_LuaJit_one
#define USE_GSC_MEM_ALLOC // when this is undefined memory allocation for luajit is handled by luajit allocator
//-CORE

// VISUAL:
#define DETAIL_RADIUS // detail draw radius (by KD)
#define VSYNC_FIX // functional VSync by avbaula
// ECO_RENDER is not needed with VSYNC_FIX enabled
//#define ECO_RENDER // limit FPS in menu to prevent video card overheat (by alpet)
//-VISUAL

// TWEAKS:
#define FP_DEATH // first person death view
#define NEW_ANIMS // use new animations. Please enclose any new animation addions with this define
#define NEW_SOUNDS // use new sounds. Please enclose any new sound addions with this define
//-TWEAKS