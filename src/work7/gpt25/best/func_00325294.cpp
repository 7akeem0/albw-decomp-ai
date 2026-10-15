#include "../range_types.h"
struct Obj3252 { char pad0[0x490]; s8 kind; char pad1[0x4a8-0x491]; f32 value; };
extern "C" void func_003253F0(Obj3252*);
extern "C" void func_003252B8(Obj3252*,s32,f32);
extern "C" void f_00325294(Obj3252* p) {
    func_003253F0(p);
    func_003252B8(p,p->kind,p->value);
}
