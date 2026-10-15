#include "range.h"
struct Obj{u8 pad[0x38];u16 active;u8 pad3a[0x452];s32 counter;};
extern void func_002C81E8(Obj*);
void f_002C84C4(Obj*p){if(p->active){++p->counter;if(p->counter>40)func_002C81E8(p);}}
