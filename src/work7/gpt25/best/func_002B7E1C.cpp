#include "../range_types.h"
struct Obj2B7E { char pad0[0xa6c]; u32 state; char pad1[0xaa5-0xa70]; u8 flag0; char pad2[0xb42-0xaa6]; u8 flag1; };
extern "C" void func_002D4054(u32*);
extern "C" void f_002B7E1C(Obj2B7E* p) {
    func_002D4054(&p->state);
    p->flag0=1;
    p->flag1=1;
}
