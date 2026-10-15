#include "ds3.h"
struct Req5C { char p[0x5c]; };
struct S28AC40 { char pad[0x3d4]; f32 m3d4; char pad2[0x580-0x3d8]; void* m580; };
extern "C" Req5C* func_002C11E8(Req5C*, int, int, int);
extern "C" void func_0016898C(void*, Req5C*);
extern "C" void func_0028A7F0(S28AC40*);
void func_0028AC40(S28AC40* self) {
    Req5C req;
    Req5C* r = func_002C11E8(&req, 1, 0, 0);
    func_0016898C(self->m580, r);
    func_0028A7F0(self);
    self->m3d4 += 0.1f;
}
