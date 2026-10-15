#include "range.h"
struct Child2C00 {void func_002C00D4(void*,s32);};
struct O2C00 {u8 pad[0x14];Child2C00* child;u32 unused;s32 value;};
void f_2C00C0(O2C00* p){p->child->func_002C00D4(p,p->value);}
