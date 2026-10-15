typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Timeline { void func_00352210(bool b, f32 frame); };
template <typename T>
struct StateMgr {
    typedef void (T::*Func)();
    u32 mCounter; s8 mCur; s8 mNext; u8 mNum; char pad7[0x10 - 7];
    Timeline* mTimeline; T* mOwner; Func* mEnter; Func* mExec; Func* mExit;
    void execute() {
        (mOwner->*mExec[mCur])();
        ++mCounter;
        if (mTimeline) mTimeline->func_00352210(true, (f32)mCounter);
    }
};
void func_004C00F4(void*);
void func_004BCAA8(void*);
u32 func_00583B1C(void*);
bool func_00588BF0(void*, s32);
void func_004DECDC(void*);
void func_004BC8D8(void*);
struct Base { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void vac(s32 a, s32 b); };
struct Cls : Base {
    char pad[0x853 - 4]; u8 m853; u8 m854; u8 m855; char pad1[0x960 - 0x856]; StateMgr<Cls> mState;
    void calc();
    void chk() { if (func_00588BF0(this, 1)) func_004DECDC(this); }
};
void Cls::calc() {
    mState.execute();
    func_004C00F4(this);
    func_004BCAA8(this);
    if (m855 == 8 && func_00583B1C(this)) { m853 = 9; m855 = 9; vac(9, 0); }
    chk();
    func_004BC8D8(this);
}
