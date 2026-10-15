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
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
void func_0066A50C(void*, u32) ;
struct T4D9 {
    char pad0[0x788];
    char m788[0x7b0 - 0x788];
    void* m7b0;
    AnimArr* m7b4;
    void stopAnim();
    void playAnim();
    void f();
};
void T4D9::stopAnim() { func_00169A80(m7b4); }
void T4D9::playAnim() { func_00168E9C(m7b4, m7b0, 0); }
void T4D9::f() {
    T4D9* t = this;
    stopAnim();
    playAnim();
    AnimArr* a = t->m7b4;
    AnimElem& e = (*a)[0];
    if (!e.m1c && e.isEnd()) {
        func_0066A50C(t->m788, 0);
    }
}
