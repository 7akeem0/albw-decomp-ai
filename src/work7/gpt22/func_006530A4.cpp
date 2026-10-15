#include "range.h"
struct S{u8 pad[0x9cc];u16 a,b;};extern void* data_0070FB60;extern "C" void func_00255AB4(void*,s32);void target(S* p,bool second){func_00255AB4(data_0070FB60,-(second?p->b:p->a));}
