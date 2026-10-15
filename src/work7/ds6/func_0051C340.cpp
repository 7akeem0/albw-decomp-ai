#include "ds6.h"

struct T { char pad[0x90]; void* m90; };

struct S51C340 {
    char pad[0xb0];
    T* mB0;
    T* mB4[8];
    T* mD4;
};

void func_0051C340(S51C340* self, void* v) {
    self->mB0->m90 = v;
    for (s32 i = 0; i < 8; i++) {
        void** p = (void**)self->mB4;
        if ((u32)i < 8u) p = p + i;
        T* t = (T*)*p;
        t->m90 = v;
    }
    self->mD4->m90 = v;
}
