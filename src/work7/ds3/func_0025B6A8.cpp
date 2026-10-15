#include "ds3.h"
struct X25B6A8 { char pad[0x10]; void* m10; u32 m14; u32 m18; u32 m1c; u32 m20; };
extern "C" void func_001DFECC(void*, void*);
extern "C" void func_001DFE74(void*, void*);
extern "C" void func_001E0018(void*, u32);
void func_0025B6A8(X25B6A8* self, void* p) {
    if (self->m10) { func_001DFECC(self->m10, self); self->m10 = 0; self->m14 = 0; }
    if (p) {
        self->m10 = p;
        func_001DFE74(self->m10, self);
        if (self->m14 & 2) func_001E0018(self->m10, self->m20);
    }
}
