#include "ds3.h"
struct S266D { char pad[0x3e0]; char vy[0x40]; };
extern "C" f32 func_004F898C();
extern "C" void func_004F8964(void*, s32, f32);
extern "C" bool func_0058A8F0(S266D*);
extern "C" void* func_00520FC0(S266D*);
extern "C" void func_00268830(S266D*, void*, s32);
void func_00266D28(S266D* p) {
    f32 g = func_004F898C();
    func_004F8964(p->vy, 1, g);
    if (func_0058A8F0(p)) {
        func_00268830(p, func_00520FC0(p), 4);
    }
}
