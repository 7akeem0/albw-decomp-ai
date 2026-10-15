#include "ds3.h"
struct Obj478 { char pad[0x80]; char m80[0xe4]; u32 flags164; };
struct Obj584 { u32 m0; u32 m4; u32 m8; u32 mC; };
struct S289F70 { char pad[0x3d0]; u32 m3d0; u32 m3d4; u32 m3d8; char pad2[0x3e8-0x3dc]; u32 m3E8; char pad3[0x478-0x3ec]; Obj478* m478; char pad4[0x57c-0x47c]; void* m57C; u32 m580; Obj584* m584; };
extern "C" void func_004D8AEC(void*, u32, void*);
extern "C" void func_004356B4(void*);
extern "C" void func_001512B4(void*, void*);
void func_00289F70(S289F70* self) {
    Obj478* o = self->m478;
    o->flags164 |= 0x40000000;
    func_004D8AEC(o->m80, self->m3E8, (char*)self + 0x3d0);
    Obj584* p = self->m584;
    p->m4 = self->m3d0;
    p->m8 = self->m3d4;
    p->mC = self->m3d8;
    func_004356B4(self->m584);
    func_001512B4(self->m57C, (char*)self + 0x4d0);
}
