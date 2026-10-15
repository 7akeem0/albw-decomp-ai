#include "range_types.h"
struct Obj2916 { char pad[0x188]; u32 flags; };
struct Mgr2916 { char pad[0x18]; Obj2916* object; };
extern Mgr2916* data_00708998;
extern "C" void func_001E8A70(Obj2916*);
extern "C" void f_002916E8() {
    Obj2916* object=data_00708998->object;
    object->flags &= ~1u;
    func_001E8A70(object);
}
