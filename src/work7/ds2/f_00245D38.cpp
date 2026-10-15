#include "ds2.h"

extern void* g_709F30;
extern void* g_7142C8;
extern void func_004C6D68(void*, s16);
extern void func_0014D604(void*);

struct Obj245D38 {
    char pad0[0x32];
    s16 m32;
    char pad34[0x964 - 0x34];
    u8 m964;
};

void func_00245D38(Obj245D38* self) {
    if (self->m964 != 2) return;
    void* p = g_709F30;
    if (p) func_004C6D68(p, self->m32);
    func_0014D604(*(void**)((char*)g_7142C8 + 0x12c));
}
