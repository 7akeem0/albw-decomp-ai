#include "ds3.h"
struct S2B66 { char pad[0x3d0]; char v3D0[0x57c]; char c94C[0x40]; };
extern "C" void func_004D838C(void*, void*, f32, f32, f32);
extern "C" void func_004F68AC(S2B66*, void*);
void func_002B666C(S2B66* p, void* a) {
    func_004D838C(p->c94C, p->v3D0, 0.5f, 0.1f, 3.4028235e38f);
    func_004F68AC(p, a);
}
