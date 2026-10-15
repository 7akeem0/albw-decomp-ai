#include "ds3.h"
struct E2D16 { void* m28; char pad[0x24]; };
struct S2D16 { char pad0[8]; void* m8; char g[0x28-0xc]; E2D16 arr[4]; };
extern "C" void func_004CF478(void*, void*, s32);
void func_002D16D8(S2D16* p, void* a) {
    func_004CF478(p->m8, a, 0);
    for (s32 i = 0; i < 4; ++i) {
        if (p->arr[i].m28) func_004CF478(p->arr[i].m28, a, 0);
    }
}
