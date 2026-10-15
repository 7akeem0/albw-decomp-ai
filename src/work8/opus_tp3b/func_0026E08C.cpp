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
    u32 mCounter;        // +76
    s8 mCur;             // +4
    s8 mNext;            // +5
    u8 mNum;             // +6
    char pad7[0x10 - 7];
    Timeline* mTimeline; // +0x5c
    T* mOwner;           // +0x60
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
struct Own26 { virtual void v0(); };
struct Sub26 { char pad[0x4c];
    typedef void (Own26::*Func)();
    u32 mCounter; s8 mCur; s8 mNext; u8 mNum; char pad7[0x10 - 7];
    Timeline* mTimeline; Own26* mOwner; Func* mEnter; Func* mExec; Func* mExit;
    void execute() { (mOwner->*mExec[mCur])(); ++mCounter; if (mTimeline) mTimeline->func_00352210(true, (f32)mCounter); }
};
struct Cls26 {
    char pad[0x74];
    Sub26* m74;
    void f();
};
extern "C" void func_0012C85C(Cls26*);
void Cls26::f() {
    func_0012C85C(this);
    m74->execute();
}
