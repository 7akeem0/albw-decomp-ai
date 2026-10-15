#include "ds6.h"

struct AEntry {
    u32 m0, m4;
    f32 m8;
    u32 mC;
    f32 m10;
    f32 m14;
    u32 m18;
    u8 m1c;
};

struct AArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AEntry* mData;
    AEntry& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};

struct Obj51434C {
    char _pad[0x4b0];
    AArr* m4b0;
    AArr* m4b4;
};

 void func_0066B94C(void* p, u32 v);

void func_0051434C(Obj51434C* self) {
    func_0016898C(self->m4b0, Req5C(8, 6, false));
    func_0016898C(self->m4b4, Req5C(1, 6, false));
    (*self->m4b4)[0].m10 = 1.0f;
    func_0066B94C((char*)self + 0x48c, 0x11);
}
