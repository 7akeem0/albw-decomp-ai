#include "../range_types.h"
struct Obj2D04 { char pad[0x420]; u32 state; };
extern "C" bool func_0024E838(Obj2D04*);
extern "C"  void func_00663A98(u32*,s32);
extern "C" void f_002D0420(Obj2D04* p) {
    if(func_0024E838(p))func_00663A98(&p->state,1);
}
