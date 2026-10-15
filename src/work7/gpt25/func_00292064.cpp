#include "range_types.h"
struct Obj2920 { char pad[0x48]; void* state; };
extern "C" void** func_002D55D0(void*,s32);
extern "C" void f_00292064(Obj2920* p,void* a) {
    void** state=func_002D55D0(p->state,79);
    if (state) *state=a;
}
