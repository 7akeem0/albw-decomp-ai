#include "range_types.h"
struct Obj2707 { char pad[0x1c]; u32 value; };
extern "C" void func_002707A4(Obj2707*,s32);
extern "C" void f_00270784(Obj2707* p,s32 n) {
    func_002707A4(p,n<0?30:n);
    p->value=0;
}
