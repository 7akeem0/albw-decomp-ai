#include "../../../../work7/ds3/ds3.h"
struct G2C2574 { void* m0; void* m4; };
extern G2C2574 data_00711DE8;
extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align) ;
extern "C" void* func_0010DA7C(void*, void*, s32);
extern "C" void* func_004C4268(void*);
extern u32 ro_006F8040[];
void* func_002C2574(void* self) {
    if (data_00711DE8.m0 != 0) return data_00711DE8.m0;
    void* buf = func_0010CEE0(0x4dec, self, 4);
    void* o = buf;
    if (buf != 0) {
        const s32 k = 3;
        void* h = self;
        o = (void*)func_0010DA7C(buf, h, k);
        *(void**)o = (void*)ro_006F8040;
    }
    data_00711DE8.m4 = o;
    data_00711DE8.m0 = buf ? func_004C4268(buf) : (void*)0;
    return data_00711DE8.m0;
}
