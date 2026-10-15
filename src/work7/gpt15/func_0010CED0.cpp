#include "range.h"
struct S{u32 pad;void* heap;};extern "C" void* func_0010CEE0(u32,void*,s32);extern "C" void* func_0010CED0(S*p,u32 size,s32 align){return func_0010CEE0(size,p->heap,align);}
