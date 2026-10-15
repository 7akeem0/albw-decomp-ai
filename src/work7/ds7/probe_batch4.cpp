#include "range.h"

struct Inner587 { char pad[0x140]; void* m140; };
struct Self587 { char pad[0x24]; Inner587* m24; };
struct A587 { virtual void vd(); virtual void vd2(); virtual void v0(); u32 m4; };

// 0x587BA8
void func_0056BD28(void*, u32, s32);
void f587BA8(Self587* self, A587* a) {
    a->v0();
    func_0056BD28((char*)self->m24->m140 + 0xc, a->m4, -1);
}

// 0x587FCC
void func_0056D3E4(void*, u32);
void* func_0057F260(void*);
void f587FCC(Self587* self, A587* a) {
    a->v0();
    u32 x = a->m4;
    func_0056D3E4(func_0057F260(self->m24->m140), x);
}

// 0x5883B0
bool func_00569710(void*, void*, void*);
s32 f5883B0(Self587* self, void* a) {
    void* p = func_0057F260(self->m24->m140);
    u32 buf[6];
    if (func_00569710(p, a, buf)) return buf[1];
    return -1;
}

// 0x58A744
struct O58A744 { char pad[0x4dc]; u8 m4DC; char pad2[0x50e-0x4dd]; s16 m50E; };
bool f58A744(O58A744* o) {
    u8 m = o->m4DC;
    if ((m == 0 || m == 2) || (m == 3 || m == 1)) return o->m50E > 0;
    return false;
}
