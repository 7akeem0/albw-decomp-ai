#include "ds6.h"

struct E4FCD5C { void* m0; u8 m4; char _pad[7]; };
struct Obj4FCD5C { E4FCD5C mElems[14]; u8 ma8; };

void func_004CF478(void* p, u32 a, s32 b);

void func_004FCD5C(Obj4FCD5C* self, u32 a) {
    for (u32 i = 0; i < self->ma8; i++) {
        E4FCD5C* e = &self->mElems[i];
        if (e->m4 & 1) func_004CF478(e->m0, a, 0);
    }
}

