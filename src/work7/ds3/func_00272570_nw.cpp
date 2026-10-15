#include "ds3.h"
struct G272570 { void* m0; void* m4; };
extern G272570 data_0070BC60;
extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align) ;
extern "C" void* func_0010DA7C(void*, void*, s32);
extern "C" void* func_002738F4(void*);
extern u32 ro_006EF6BC[];
void* func_00272570(void* self) {
    if (data_0070BC60.m0 != 0) return data_0070BC60.m0;
    void* buf = func_0010CEE0(0x7cdc, self, 4);
    void* o = buf;
    if (buf != 0) {
        void* h = self;
        o = (void*)func_0010DA7C(buf, h, 3);
        *(void**)o = (void*)ro_006EF6BC;
    }
    data_0070BC60.m4 = o;
    data_0070BC60.m0 = buf ? func_002738F4(buf) : (void*)0;
    return data_0070BC60.m0;
}
