#include "range.h"
struct Obj1CF324{char pad[0x40c];u32 state;char pad410[0x43c-0x410];Timer24 timer;};
extern bool func_00588BF0(Obj1CF324*,s32);
extern void func_0065C454(u32*,s32);
extern "C" void target(Obj1CF324*p){if(func_00588BF0(p,0)){if(!p->timer.step())func_0065C454(&p->state,1);}}
