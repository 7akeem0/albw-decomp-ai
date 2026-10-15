#include "range.h"
struct Obj {u8 pad[0x119];u8 flag;};
extern void* data_0070FB60;
extern void func_00361658(void*);
void f_002FCAF8(Obj*p){func_00361658(data_0070FB60);p->flag=0;}
