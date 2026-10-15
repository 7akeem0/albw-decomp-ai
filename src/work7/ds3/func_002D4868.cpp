#include "ds3.h"
struct S2D48b { char pad[0x24]; void* m24; };
extern "C" void func_004CF864(void*, s32, s32);
extern "C" void func_004CF478(void*, s32, s32);
extern "C" void func_004CF5B0(void*, s32, s32, s32);
extern "C" void func_004D02E8(void*, s32);
void func_002D4868(S2D48b* p) {
    func_004CF864(p->m24, 1, -1);
    func_004CF478(p->m24, 1, 0);
    func_004CF5B0(p->m24, 0, 0, 0xff);
    func_004D02E8(p->m24, 1);
}
