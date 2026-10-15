#include "ds3.h"
struct S2F97 { char pad[0x40c]; void* m40C; };
extern "C" u8 bss_0074B5FC[];
extern "C" void func_004FB344(S2F97*);
extern "C" void func_004FACA4(S2F97*, s32, void*);
extern "C" void func_004FB370(S2F97*, s32, void*);
void func_002F97A4(S2F97* p) {
    func_004FB344(p);
    for (s32 i = 0; i < 0xd; ++i) {
        func_004FACA4(p, i, bss_0074B5FC + i * 8);
        func_004FB370(p, i, p->m40C);
    }
}
