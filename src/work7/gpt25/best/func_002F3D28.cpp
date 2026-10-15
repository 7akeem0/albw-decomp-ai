#include "../range_types.h"
struct Obj2F3D { char pad[0x59c]; Flag32 flags; };
extern "C" void func_004FC570(Obj2F3D*);
extern "C" void f_002F3D28(Obj2F3D* p) {
    func_004FC570(p);
    p->flags.reset(0x4000);
    p->flags.set(0x80);
    p->flags.set(0x30);
}
