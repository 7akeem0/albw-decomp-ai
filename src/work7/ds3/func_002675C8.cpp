#include "ds3.h"
struct S2675 { char pad[0x990]; f32 m990; };
extern "C" bool func_0053A900(S2675*);
extern "C" void func_004FABDC(S2675*, s32, s32, s32);
void func_002675C8(S2675* p) {
    p->m990 = 0.0f;
    func_004FABDC(p, func_0053A900(p) ? 3 : 4, -1, 0);
}
