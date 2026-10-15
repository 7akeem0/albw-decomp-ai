#include "range.h"
struct Obj {u8 pad[0xb93];u8 count;};extern void func_002A45FC(Obj*,s32);extern u32 func_004FABDC(Obj*,s32,s32,s32);
u32 f_002A4AE8(Obj*p){func_002A45FC(p,0);++p->count;return func_004FABDC(p,6,-1,0);}
