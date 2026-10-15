#include "range.h"
struct S{u8 pad[0x97c];s32 count;};extern "C" void func_002F8DE4(S*,s32,s32,s32);void target(S* p){func_002F8DE4(p,0,-1,0);p->count=120;}
