#include "ds3.h"
struct Obj40C { char pad[0x158]; f32 m158; };
struct S2F618C { char pad[0x40c]; Obj40C* m40C; char pad2[0xc90-0x410]; u32 mC90; };
extern "C" void* data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" void func_0039D434(void*, float);
void func_002F618C(S2F618C* self, float v) {
    void* a = func_0052FBA0((char*)data_00706E20 + 0x3dbbc, self->mC90);
    *(f32*)((char*)self + 0xb90) = v;
    self->m40C->m158 = v;
    if (a != 0) func_0039D434(a, v);
    *(f32*)((char*)self + 0x4f8) = v;
}
