#include "range_types.h"
struct Child31A7 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(s32); };
struct Obj31A7 { char pad0[0x454]; Child31A7* child; char pad1[0x78c-0x458]; u8 flag; };
extern "C" void f_0031A7E8(Obj31A7* p) {
    p->flag=1;
    p->child->v4(36);
}
