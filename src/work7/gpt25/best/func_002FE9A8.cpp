#include "../range_types.h"
struct Obj2FE9 { char pad0[0x10]; u32 state; char pad1[0x40-0x14]; u32 value; char pad2[3]; u8 flag; };
extern "C" void func_003CC054(u32*,s32);
extern "C" void f_002FE9A8(Obj2FE9* p) {
    func_003CC054(&p->state,0);
    p->value=0;
    p->flag=0;
}
