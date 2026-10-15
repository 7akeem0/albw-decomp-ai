#include "range.h"
struct Obj{u8 pad0[0x10];void* child;u8 pad14[0xB4];u8 flag;};
extern void func_004CEAF0(void*);
void f_0028C010(Obj*p){func_004CEAF0(p->child);p->flag=0;}
