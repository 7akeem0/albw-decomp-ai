#include "../range_types.h"
struct Child296D;
struct Obj296D {char pad[0x4c];Child296D*child;};
extern "C" void func_002972A0(Child296D*,s32);
extern "C" s32 func_00296D28(Child296D*,s32);
extern "C" s32 f_00296D00(Obj296D*p,s32 n){
    func_002972A0(p->child,15);
    return func_00296D28(p->child,n);
}
