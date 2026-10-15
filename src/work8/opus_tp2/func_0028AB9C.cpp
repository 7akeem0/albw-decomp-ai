#include "../../work7/ds3/ds3.h"
struct Req5C3 { char p[0x5c]; };
struct S28ABE8 { char pad[0x3dc]; f32 m3dc; f32 m3e0; f32 m3e4; char pad2[0x580-0x3e8]; void* m580; char pad3[0x5d7-0x584]; u8 b5D7; };
extern "C" void func_00324964(S28ABE8*);
extern "C" Req5C3* func_002C11E8(Req5C3*, int, int, int);
extern "C" void func_0016898C(void*, Req5C3*);
void func_0028ABE8(S28ABE8* self) {
    Req5C3 req;
    Req5C3* r = func_002C11E8(&req, 3, 0, 0);
    func_0016898C(self->m580, r);
    self->m3dc = 0.0f;
    self->m3e0 = 0.0f;
    self->m3e4 = 0.0f;
}
