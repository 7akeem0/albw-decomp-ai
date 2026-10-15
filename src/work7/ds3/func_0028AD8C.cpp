#include "ds3.h"
struct Req28AD { char p[0x5c]; };
void func_0028A7F0(void*);
extern "C" Req28AD* func_002C11E8(Req28AD*, int, int, int);
extern "C" void func_0016898C(void*, Req28AD*);
struct S28AD8C { char pad[0x368]; Vec3 m368; char pad2[0x3d0-0x374]; Vec3 m3d0v; char pad3[0x580-0x3dc]; void* m580; };
void func_0028AD8C(S28AD8C* self) {
    func_0028A7F0(self);
    Req28AD req;
    Req28AD* r = func_002C11E8(&req, 3, 0xa, 0);
    func_0016898C(self->m580, r);
    self->m3d0v.y += 0.1f;
    Vec3* d = &self->m368;
    *d = self->m3d0v;
}
