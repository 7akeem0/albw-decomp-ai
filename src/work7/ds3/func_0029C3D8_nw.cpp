#include "ds3.h"
struct S29C3 { char* m0; char pad1[0xc0-4]; u16 hC0; u16 hC2; char g[0xc6-0xc4]; u8 bC6; };
extern "C" void func_0029BD88(S29C3*, void*);
extern "C"  void func_0066BD18(void*, s32);
void func_0029C3D8(S29C3* p) {
    if (p->hC0) return;
    if (!p->hC2) return;
    p->bC6 = 1;
    func_0029BD88(p, p->m0 + 0xe0);
    func_0066BD18((char*)p + 4, 6);
}
