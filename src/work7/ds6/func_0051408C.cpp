#include "ds6.h"

struct AEntry {
    u32 m0, m4;
    f32 m8;
    u32 mC;
    f32 m10;
    f32 m14;
    u32 m18;
    u8 m1c;
    bool isEnd() const {
        if (m10 >= 0.0f) return m8 == m14;
        return m8 <= 0.0f;
    }
};

struct AArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AEntry* mData;
};

struct Obj51408C {
    char _pad[0x4b0];
    AArr* m4b0;
};

void func_0051408C(Obj51408C* self) {
    AEntry* e = self->m4b0->mData;
    if (e->m1c == 0 && e->isEnd()) {
        func_0016898C(self->m4b0, Req5C(0, 6, false));
    }
}
