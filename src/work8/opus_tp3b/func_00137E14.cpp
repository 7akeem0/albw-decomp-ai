typedef unsigned int u32; typedef signed char s8; typedef unsigned char u8; typedef float f32;
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
extern "C" void func_00352210(void*, u32, f32);
struct StateMgr {
    u32 mCount; s8 mCur; s8 mNext; u8 mNum; u8 pad7; u32 mNames[2]; void* mTimeline;
    Base* mOwner; PMF* mEnter; PMF* mExec; PMF* mExit;
    void exec() {
        (mOwner->*mExec[mCur])();
        u32 c = ++mCount;
        if (mTimeline) func_00352210(mTimeline, 1, (f32)c);
    }
};
struct Owner { u8 pad[0x40c]; StateMgr mMgr; void* m430; void* m434; void func_0050FD14(); };
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
extern "C" void func_004CEAF0(void*);
void Owner::func_0050FD14() { Owner* self = this; self->mMgr.exec(); Owner* s2 = this; func_00169A80(s2->m434); func_00168E9C(s2->m434, s2->m430, 0); func_004CEAF0(s2->m430); }
