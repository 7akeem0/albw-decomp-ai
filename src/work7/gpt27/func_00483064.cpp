#include "range.h"
extern void func_0012C718(void*);
struct Obj483 {u8 pad[0x74];s32 counter;u8 pad78[0xec-0x78];u8 state;};
void func_00483064(Obj483* p){if(p->counter>=75 && p->state==1)func_0012C718(p);}
