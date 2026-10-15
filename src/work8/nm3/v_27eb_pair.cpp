#include "ds3.h"
struct Pair40C { u32 a, b; };
struct S27EBC4 { char pad[0x40c]; Pair40C p40c; char pad2[0x424-0x414]; u32 m424; char pad3[0x42c-0x428]; u32 m42c; };
extern "C" void func_0014E2A0(S27EBC4*, u32, void*, int, int, int);
void func_0027EBC4(S27EBC4* self) {
    func_0014E2A0(self, self->m424, &self->m42c, 0x1608, 0, 0);
    Pair40C p = self->p40c;
    if (p.a < p.b) { p.a++; self->p40c = p; }
}
