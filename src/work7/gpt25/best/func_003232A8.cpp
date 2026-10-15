#include "../range_types.h"
struct Obj3232 { char pad0[0x3d0]; Vec3 pos; char pad1[0x40c-0x3dc]; s16 kind; s8 flag; };
extern void* data_00708998;
extern "C" void func_004ED4D4(void*,s32,const Vec3*,s32);
extern "C" void f_003232A8(Obj3232* p) {
    func_004ED4D4(data_00708998,p->kind,&p->pos,p->flag);
}
