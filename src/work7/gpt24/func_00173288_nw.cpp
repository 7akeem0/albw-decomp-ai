#include "range.h"
struct Object1732 {char pad[0x40c]; u32 state;};
extern bool func_00588BF0(Object1732*,s32);
extern void func_006589D0(void*,s32) ;
void target(Object1732* p){if(func_00588BF0(p,0))func_006589D0(&p->state,1);}
