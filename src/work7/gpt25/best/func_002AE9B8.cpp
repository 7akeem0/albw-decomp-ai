#include "../range_types.h"
struct Child2AE9 {char pad[0x508];s16 count;};
struct Obj2AE9 {char pad[0x34];Child2AE9*child;};
extern "C" void func_002B1644(Obj2AE9*,s32,u8);
extern "C" void func_002B05F0(Obj2AE9*,s32,u8);
extern "C" void f_002AE9B8(Obj2AE9*p,s32 n){
    if(p->child->count<=0)func_002B1644(p,17,n);
    else func_002B05F0(p,17,n);
}
