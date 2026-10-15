#include "range.h"
struct Obj{u8 pad0[0x420];void* child;};
extern void func_0034C8F0(void*,u32,s32);
bool f_00318B98(Obj*p,s32 n){func_0034C8F0(p->child,0,n);return false;}
