#include "ds2.h"
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
void func_0036BE78(void*);
void func_0065E774(void*, u32);
struct This2244 {
    char pad0[0x468];
    char m468[1];             // 0x468
    char pad1[0x48c - 0x469];
    char m48c[1];             // 0x48c
    char pad2[0x685 - 0x48d];
    u8 m685;                  // 0x685
    char pad3[0x68c - 0x686];
    u32 m68c;                 // 0x68c
};

void func_002244C4(This2244* t) {
    func_0036BE78((char*)t + 0x48c);
    AnimArr* a = (AnimArr*)t->m68c;
    AnimElem& e = (*a)[0];
    if (!e.m1c && e.isEnd()) {
        func_0065E774((char*)t + 0x468, 0xf);
        t->m685 = 0;
    }
}
