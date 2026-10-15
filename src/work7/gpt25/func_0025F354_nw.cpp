#include "range_types.h"
struct Obj25F3 { char pad[0x48]; s32 state; };
extern "C"  void func_006600C4(s32*,s32);
extern "C" void f_0025F354(Obj25F3* p) {
    if (p->state>=10) func_006600C4(&p->state,0);
}
