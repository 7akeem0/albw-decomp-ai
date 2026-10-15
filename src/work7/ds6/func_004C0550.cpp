#include "ds6.h"

struct AEntry { u32 m0, m4; f32 m8; u32 mC; f32 m10; };
struct AArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AEntry* mData;
    AEntry& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};

void func_00566C10(void* mgr, u32 id);

struct Obj4C0550 {
    char _pad[0x7a0];
    void* m7a0;
    char _pad2[0x7b0 - 0x7a4];
    AArr* m7b0;
    char _pad3[0x8e0 - 0x7b4];
    u32 m8e0;
    u32 m8e4;
    char _pad4[0x8ec - 0x8e8];
    u32 m8ec;
    char _pad5[0x916 - 0x8f0];
    u8 m916;
};

void func_004C0550(Obj4C0550* self, u32 id) {
    if (self->m7b0 == 0) return;
    if (id == (u32)-1) {
        if (self->m916 != 0) {
            if (self->m8e0 != 0xffff) func_00566C10(self->m7a0, self->m8e0);
            if (self->m8e4 != 0xffff) func_00566C10(self->m7a0, self->m8e4);
        }
        self->m916 = 0;
        return;
    }
    self->m916 = 1;
    func_0016898C(self->m7b0, Req5C(id, self->m8ec, false));
    (*self->m7b0)[0].m10 = 1.0f;
}
