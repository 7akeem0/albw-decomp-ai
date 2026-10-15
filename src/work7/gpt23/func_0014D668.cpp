#include "range.h"
struct Receiver14D { char pad0[0x1c]; void* child; };
extern "C" void func_00438580(void*,s32,s32);
extern "C" void func_0014D668(Receiver14D* p, s32 on) {
    if (p->child) func_00438580(p->child,1,on ? 1 : 2);
}
