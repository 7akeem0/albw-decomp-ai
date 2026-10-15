#include "../range_types.h"
struct Obj30A1 { char pad0[0x70c]; u32 state; char pad1[0x73c-0x710]; Vec3 pos; char pad2[0x89c-0x748]; u32 value; };
extern "C" void func_0030A200(u32*,u32*,s32,const Vec3*);
extern "C" void f_0030A1E0(Obj30A1* p) {
    func_0030A200(&p->state,&p->value,0,&p->pos);
}
