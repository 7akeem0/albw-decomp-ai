#include "range.h"
struct C0B0 {u8 pad[0xa90];s32 count;void dec(){--count;}};struct O0B0 {u8 pad[0x8e0];C0B0*child;};
extern "C" void func_004F8638(O0B0*,s32);
extern "C" void func_00370B00(O0B0*p){func_004F8638(p,-1);p->child->dec();}
