#include "ds3.h"
struct Sub2EF0 { char pad[0x20e]; u8 mE0E; char g[1]; f32 a, b; };
struct S2EF0 { char pad[0x59c]; Flag32 m59C; char g[0xc00-0x5a0]; Sub2EF0 sub; };
extern "C" void func_002F3D28(S2EF0*);
void func_002EF024(S2EF0* p) {
    p->sub.a = 0.0f;
    p->sub.b = 0.0f;
    p->sub.mE0E = 0;
    func_002F3D28(p);
    p->m59C.set(7);
}
