#include "ds3.h"
struct S2B55 { char pad[0x3e8]; char m3E8[0x634]; char mAlC[4]; };
extern "C" void func_0051D2CC(void*, void*, f32);
void func_002B55C8(S2B55* p, void* a) {
    func_0051D2CC(p->m3E8, a, 0.15f);
    func_0051D2CC(p->mAlC, a, 0.15f);
}
