#include "../../work7/ds2/ds2.h"
struct AnimElem {
    u32 m0, m4;
    f32 m8;
    u32 mC;
    f32 m10;
    f32 m14;
    u32 m18;
    u8 m1c;
    u8 pad[0x26 - 0x1d];
    u8 m26;
    bool isEnd() const {
        bool end;
        if (m10 >= 0.0f) end = m8 == m14;
        else end = m8 <= 0.0f;
        return end;
    }
};
struct AnimArr {
    u32 pad[3];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
void func_00169A80(void*);
void func_00168E9C(void*, u32, u32);
void func_0066A50C(void*, u32) ;
struct This {
    char pad0[0x788];
    char m788[1];
    char pad1[0x7b0 - 0x789];
    u32 m7b0;
    void* m7b4;
};

void func_004D958C(This* t) {
    func_00169A80(t->m7b4);
    This* s = t;
    func_00168E9C(s->m7b4, s->m7b0, 0);
    AnimArr* a = (AnimArr*)s->m7b4;
    AnimElem& e = (*a)[0];
    if (!e.m1c && e.isEnd()) {
        func_0066A50C((char*)t + 0x788, 0x2);
    }
}
