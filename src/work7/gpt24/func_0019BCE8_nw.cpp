#include "range.h"
struct Object1732 {char pad[0x41c]; u32 state;};
extern bool func_00588BF0(Object1732*,s32);
extern void func_00659F64(void*,s32) ;
void target(Object1732* p){if(func_00588BF0(p,0))func_00659F64(&p->state,1);}
