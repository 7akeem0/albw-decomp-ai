#include "range_types.h"
struct Obj2BF8 { char pad[0x38]; u32 state; s8 kind; };
extern "C" void func_00662C9C(u32*,s32);
extern "C" void func_001B6C04(Obj2BF8*);
extern "C" void f_002BF8B4(Obj2BF8* p) {
    func_00662C9C(&p->state,p->kind);
    func_001B6C04(p);
}
