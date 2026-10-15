#include "../range_types.h"
struct Obj2D41 { u32 vptr; void* child; };
extern "C" void func_004D0194(void*,s32);
extern "C" void func_004D0268(void*,s32);
extern "C" void f_002D41B0(Obj2D41* p,s32 a,s32 b) {
    func_004D0194(p->child,a);
    func_004D0268(p->child,b);
}
