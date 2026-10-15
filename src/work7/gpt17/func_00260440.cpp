#include "range.h"
struct Obj {u8 pad[0x30];void* handle;u32 value;u8 p38[0xc];u8 flag;};
extern void func_0034C57C(void*,u32);
void f_00260440(Obj* p){func_0034C57C(p->handle,p->value);p->flag=0;}
