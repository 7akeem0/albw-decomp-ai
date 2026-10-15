#include "range_types.h"
struct Obj305 { char pad[0x454]; void* child; };
extern "C" void func_0034C8F0(void*,s32,s32);
extern "C" bool f_00305BC8(Obj305* p,s32 n) {
    func_0034C8F0(p->child,0,n);
    return false;
}
