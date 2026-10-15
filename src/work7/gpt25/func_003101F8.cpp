#include "range_types.h"
struct Obj3101 { char pad0[0x476]; u8 flag; char pad1[0xb1c-0x477]; u32 value; };
extern "C" void func_00625340(Obj3101*);
extern "C" void f_003101F8(Obj3101* p) {
    func_00625340(p);
    p->value=0;
    p->flag=0;
}
