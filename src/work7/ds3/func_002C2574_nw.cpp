#include "ds3.h"
struct G2C2574 { void* m0; void* m4; };
extern G2C2574 data_0070BA08;
extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align) ;
extern "C" void* func_0010DA7C(void*, void*, s32);
extern "C" void* func_002C2610(void*);
extern u32 ro_006EF724[];
void* func_002C2574(void* self) {
    if (data_0070BA08.m0 != 0) return data_0070BA08.m0;
    void* buf = func_0010CEE0(0x37ca0, self, 4);
    void* o = buf;
    if (buf != 0) {
        const s32 k = 3;
        void* h = self;
        o = (void*)func_0010DA7C(buf, h, k);
        *(void**)o = (void*)ro_006EF724;
    }
    data_0070BA08.m4 = o;
    data_0070BA08.m0 = buf ? func_002C2610(buf) : (void*)0;
    return data_0070BA08.m0;
}
