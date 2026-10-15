#include "../range_types.h"
struct Game27B0 {char pad[0x3dbbc];u32 actors[4];};
extern Game27B0* data_00706E20;
extern "C" void func_00437438(void*,u32);
extern "C" void func_0052FD7C(u32*,void(*)(void*,u32),u32);
extern "C" void f_0027B078(u32 n){if(n){Game27B0*g=data_00706E20;func_0052FD7C(g->actors,func_00437438,n);}}
