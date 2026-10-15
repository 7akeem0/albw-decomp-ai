#include "../range_types.h"
struct Obj2639 { char pad[0x8bc]; u32 state; };
extern "C" bool func_0058A8F0(Obj2639*);
extern "C"  void func_00660490(u32*,s32);
extern "C" void f_002639E0(Obj2639* p) {
    if(func_0058A8F0(p))func_00660490(&p->state,5);
}
