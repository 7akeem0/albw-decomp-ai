#include "range_types.h"
struct Child28BC { char pad[0x10]; void* value; };
struct Obj28BC { char pad0[0x14]; Child28BC* child; char pad1[0x6c-0x18]; void* value; };
extern "C" void func_001B6BE4(Obj28BC*);
extern "C" void f_0028BC54(Obj28BC* p) {
    func_001B6BE4(p);
    if (p->value) p->child->value=p->value;
}
