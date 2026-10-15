#include "../range_types.h"
struct Obj3233{char pad[0x2d7];u8 flag;};
extern "C" bool func_00588BF0(Obj3233*,s32);
extern "C" void*data_0070FB60;
extern "C" void func_00361634(void*,s32);
void func_0032330C(Obj3233*p){if(func_00588BF0(p,0)){func_00361634(data_0070FB60,0);p->flag=1;}}
