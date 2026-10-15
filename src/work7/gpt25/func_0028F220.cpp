#include "range_types.h"
struct State28F2 { u32 pad[2]; void* value; };
struct Obj28F2 { char pad[0x48]; void* state; };
extern "C" State28F2* func_002D55D0(void*,s32);
extern "C" void f_0028F220(Obj28F2* p,void* a) {
    State28F2* state=func_002D55D0(p->state,137);
    if (state) state->value=a;
}
