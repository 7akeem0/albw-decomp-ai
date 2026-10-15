#include "../range_types.h"
struct Obj2901 {char pad[0x42];u16 kind;char gap[4];void*states;};
extern "C" void* func_002D55D0(void*,s32);
extern "C" bool f_002901D8(Obj2901*p){if(p->kind==35){if(func_002D55D0(p->states,38))return true;}return false;}
