#include "../range_types.h"
struct Obj25F7 { char pad0[0x6c]; void* child; char pad1[0x7c-0x70]; f32 value; };
extern "C" void func_004CF864(void*,s32,s32);
extern "C" void f_0025F76C(Obj25F7* p) {
    func_004CF864(p->child,0,-1);
    p->value=0.0f;
}
