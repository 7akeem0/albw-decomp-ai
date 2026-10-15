#include "ds2.h"
void func_0014E2A0(void*, u32, void*, u32, u32, u32);
f32 func_00521238(void*);
void func_00169A80(u32);
void func_00168E9C(u32, u32, u32);
void func_004CEAF0(u32);
struct This19C3 {
    char pad0[0x410];
    u32 m410;                 // 0x410
    u32 m414;                 // 0x414
    u32 m418;                 // 0x418
    char pad1[0x450 - 0x41c];
    u8 m450;                  // 0x450
    char pad2[0x460 - 0x451];
    char m460[1];             // 0x460
};

void func_0019C35C(This19C3* t) {
    if (t->m450) {
        func_0014E2A0(t, t->m418, (char*)t + 0x460, 0x100, 0, 0);
    } else {
        if (func_00521238(t) > 1.0f) t->m450 = 1;
    }
    func_00169A80(t->m414);
    func_00168E9C(t->m414, t->m410, 0);
    func_004CEAF0(t->m410);
}
