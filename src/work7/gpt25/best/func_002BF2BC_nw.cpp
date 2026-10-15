#include "../range_types.h"
struct Obj2BF2 {char pad[0x14];void*child;char gap[0x20];u32 state;char gap2[0x20];u8 flag;};
extern "C" void func_002C00A8(void*);
extern "C"  void func_00662B58(u32*,s32);
extern "C" void f_002BF2BC(Obj2BF2*p){
    func_002C00A8(p->child);
    p->flag=0;
    func_00662B58(&p->state,3);
}
