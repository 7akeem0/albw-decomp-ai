#include "range.h"
struct S { char pad[0x5e]; s16 m5e; char pad60[0x4c0-0x60]; s32 m4c0; };
extern "C" void func_00143198(S* p) { p->m4c0=p->m5e; }
