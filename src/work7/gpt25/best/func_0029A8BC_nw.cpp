#include "../range_types.h"
struct Obj29A8 { char pad0[0x40c]; u32 state; char pad1[0x461-0x410]; u8 flag; };
extern "C"  void func_00661990(u32*,s32);
extern "C" void f_0029A8BC(Obj29A8* p) {
    if(p->flag) func_00661990(&p->state,6);
}
