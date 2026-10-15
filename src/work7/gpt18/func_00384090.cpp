#include "range.h"
struct Obj3840{char pad[0x18];void* model;char pad1c[0x59-0x1c];u8 flag;};
extern "C" void func_004CF478(void*,u32,u32);
void func_00384090(Obj3840*p,u32 on){p->flag=on;func_004CF478(p->model,on,0);}
