typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef float f32;
struct Timeline {
    void func_00352210(bool b, f32 frame);
};
template <typename T>
struct StateMgr {
    typedef void (T::*Func)();
    u32 mCounter;        // +0
    s8 mCur;             // +4
    s8 mNext;            // +5
    u8 mNum;             // +6
    char pad7[0x10 - 7];
    Timeline* mTimeline; // +0x10
    T* mOwner;           // +0x14
    Func* mEnter;        // +0x18
    Func* mExec;         // +0x1c
    Func* mExit;         // +0x20
    void execute() {
        (mOwner->*mExec[mCur])();
        ++mCounter;
        if (mTimeline)
            mTimeline->func_00352210(true, (f32)mCounter);
    }
};
struct BaseAA0 {
    virtual void vf0();
    void calcBase();     // empty, linker-inlined (mov r0,r0)
};
struct Cls7AA0 : public BaseAA0 {
    char pad4[0x788 - 4];
    StateMgr<Cls7AA0> mState;
    void func_001E7AA0();
};
void Cls7AA0::func_001E7AA0() {
    calcBase();
    mState.execute();
}
