#include "../range_types.h"
struct Child29D0 { char pad[0x4c]; u8 flag; };
struct Obj29D0 { char pad0[0xbc]; u32 state; char pad1[0xec-0xc0]; Child29D0* child; };
extern "C"  void func_00661C18(u32*,s32);
extern "C" void f_0029D0E0(Obj29D0* p) {
    if(!p->child->flag) func_00661C18(&p->state,4);
}
