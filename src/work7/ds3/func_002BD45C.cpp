#include "ds3.h"
struct S2BD4 { char pad[0x95c]; u8 m95C; };
extern "C" void* func_0054DDF4(S2BD4*, s32);
extern "C" void func_004F88A0(S2BD4*, void*);
extern "C" void func_004FC07C(S2BD4*, s32, s32, s32);
void func_002BD45C(S2BD4* p) {
    func_004F88A0(p, func_0054DDF4(p, 2));
    p->m95C = 1;
    func_004FC07C(p, 0xb, -1, 0);
}
