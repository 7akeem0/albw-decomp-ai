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
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
extern "C" void func_004CEAF0(void*);
struct Pair { void* a; void* b; void upd(){ func_00169A80(b); func_00168E9C(b, a, 0); func_004CEAF0(a); } };
struct Owner { u8 pad[0x428]; Pair m428; StateMgr mMgr; void func_0050FD14(); };
void Owner::func_0050FD14() { mMgr.exec(); m428.upd(); }
