#include "ds3.h"
struct S2E96 { char pad[1]; };
extern "C" s32 func_0058AB74(S2E96*);
extern "C" bool func_0058A8F0(S2E96*);
extern "C" void func_004FC07C(S2E96*, s32, s32, s32);
void func_002E96F0(S2E96* p) {
    if (func_0058AB74(p) != 0x25) return;
    if (!func_0058A8F0(p)) return;
    func_004FC07C(p, 0x28, -1, 0);
}
