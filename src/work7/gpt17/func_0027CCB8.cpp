#include "range.h"
struct Obj {u8 pad[0x3a0];u32 value;u8 p3a4[0x120];void* child;};
extern void func_0034C8F0(void*,u32,s32);
bool f_0027CCB8(Obj* p,s32 n){func_0034C8F0(p->child,p->value,n);return false;}
