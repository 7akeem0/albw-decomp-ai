#include "ds3.h"
struct G328114 { void* m0; void* m4; };
extern G328114 data_00708A50;
extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align) ;
extern "C" void* func_0010DA7C(void*, void*, s32);
extern "C" void* func_003281AC(void*);
extern u32 ro_006EF7CC[];
void* func_00328114(void* self) {
    if (data_00708A50.m0 != 0) return data_00708A50.m0;
    void* buf = func_0010CEE0(0x5b0, self, 4);
    void* o = buf;
    if (buf != 0) {
        const s32 k = 3;
        void* h = self;
        o = (void*)func_0010DA7C(buf, h, k);
        *(void**)o = (void*)ro_006EF7CC;
    }
    data_00708A50.m4 = o;
    data_00708A50.m0 = buf ? func_003281AC(buf) : (void*)0;
    return data_00708A50.m0;
}
