#include "ds2.h"
void func_004CF478(u32, u32, u32);
void func_00151148(u32, u32);
struct This18E5 {
    char pad0[0x51c];
    f32 m51c;                 // 0x51c
    char pad1[0x528 - 0x520];
    u32 m528;                 // 0x528
    u32* m52c;                // 0x52c
    u32 m530;                 // 0x530
    u32* m534;                // 0x534
    char pad2[0x55e - 0x538];
    u8 m55e;                  // 0x55e
};

void func_0018E5DC(This18E5* t) {
    func_004CF478(t->m528, 0, 0);
    func_00151148(t->m530, 0);
    s32 n = t->m55e ? 0xc : 9;
    for (s32 i = 0; i < n; i++) {
        func_004CF478(t->m52c[i], 0, 0);
        if (t->m534) func_00151148(t->m534[i], 0);
    }
    t->m51c = 0.499f;
}
