#include "../../../work7/ds3/ds3.h"
struct G2C3034 { void* m0; void* m4; };
extern G2C3034 data_0070BBD8;
extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align) ;
extern "C" void* func_0010DA7C(void*, void*, s32);
extern "C" void* func_002C3304(void*);
extern u32 ro_006EF734[];
void* func_002C3034(void* self) {
    if (data_0070BBD8.m0 != 0) return data_0070BBD8.m0;
    void* buf = func_0010CEE0(0x170, self, 4);
    void* o = buf;
    if (buf != 0) {
        void* h = self;
        o = (void*)func_0010DA7C(buf, h, 3);
        *(void**)o = (void*)ro_006EF734;
    }
    data_0070BBD8.m4 = o;
    data_0070BBD8.m0 = buf ? func_002C3304(buf) : (void*)0;
    return data_0070BBD8.m0;
}
