#include "../range_types.h"
struct Obj2656 { char pad[0x90c]; u8 flag; };
extern "C" void func_004FABDC(Obj2656*,s32,s32,s32);
extern "C" void f_00265608(Obj2656* p) {
    func_004FABDC(p,2,-1,0);
    p->flag=0;
}
