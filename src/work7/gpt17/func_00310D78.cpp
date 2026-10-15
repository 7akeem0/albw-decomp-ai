#include "range.h"
struct Obj{u8 pad0[0xAE1];u8 flag;};
extern void* data_007142C8;
extern void func_0051B3C4(void*);
void f_00310D78(Obj*p){func_0051B3C4(data_007142C8);p->flag=0;}
