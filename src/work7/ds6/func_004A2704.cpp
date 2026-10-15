#include "ds6.h"

struct Heap;
void* operator new[](u32 size, Heap* h, s32 align);
void __aeabi_memclr(void* p, u32 n);

extern char ro_006F7E34[];

struct Obj4A2704 { void* m0; u32 m4; void* m8; u32 mC; };

Obj4A2704* func_004A2704(Obj4A2704* self, u32 a, Heap* h, u32 n) {
    self->mC = a;
    self->m0 = ro_006F7E34;
    self->m4 = n;
    void* p = operator new[](n * 4, h, 4);
    self->m8 = p;
    __aeabi_memclr(p, n * 4);
    return self;
}
