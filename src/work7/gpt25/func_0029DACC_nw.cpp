#include "range_types.h"
struct Obj29DA { char pad[0xbc]; s32 state; };
extern "C"  void func_00661D5C(s32*,s32);
extern "C" void f_0029DACC(Obj29DA* p) {
    if (p->state>=60) func_00661D5C(&p->state,1);
}
