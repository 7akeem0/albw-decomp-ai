#include "../range_types.h"
struct Obj289F { char pad[0x4f4]; u32 state; u8 flag; };
extern "C"  void func_00661708(u32*,s32);
extern "C" void f_00289FCC(Obj289F* p) {
    if (!p->flag) func_00661708(&p->state,1);
}
