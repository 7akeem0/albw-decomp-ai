#include "../range_types.h"
struct Obj2B38 { char pad[0x8ec]; u32 state; };
extern "C" bool func_0058A8F0(Obj2B38*);
extern "C"  void func_00662638(u32*,s32);
extern "C" void f_002B38F8(Obj2B38* p) {
    if(func_0058A8F0(p))func_00662638(&p->state,4);
}
