#include "../range_types.h"
struct Obj2C4D {char pad[0x59c];Flag32 flags;char gap[0x8bc-0x5a0];s32 count;};
extern "C" void func_0023CC54();
extern "C" void f_002C4DD8(Obj2C4D*p){
    if(p->count>=30){func_0023CC54();p->flags.set(0x2000);}
}
