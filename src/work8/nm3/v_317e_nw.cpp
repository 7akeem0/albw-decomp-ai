#include "ds3.h"
struct S317E { char pad[0x2e]; s16 s2E; char g[0x40c-0x30]; s32 m40C; char c40C[0x40]; };
extern "C"  void func_0066501C(void*, s32);
void func_00317EF8(S317E* p) {
    if (p->m40C <= 0x41) return;
    if (p->s2E > 0) func_0066501C((char*)p + 0x40c, 2);
    else func_0066501C((char*)p + 0x40c, 1);
}
