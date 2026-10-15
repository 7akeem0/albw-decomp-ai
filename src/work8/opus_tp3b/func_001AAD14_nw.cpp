typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct En1AA;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgr {
    typedef void (En1AA::*Func)();
    u32 mCounter; s8 mCur; s8 mNext; u8 mNum; char pad7[0x10 - 7];
    Timeline* mTimeline; En1AA* mOwner; Func* mEnter; Func* mExec; Func* mExit;
    void changeState(int s) ;
    void execute() { (mOwner->*mExec[mCur])(); ++mCounter; if (mTimeline) mTimeline->func_00352210(true, (f32)mCounter); }
};
f32 func_004F898C();
void func_004F8964(f32* v, bool clamp, f32 g);
void func_004FB0D8(En1AA* e, f32* vy);
bool func_004F70A8(En1AA* e);
bool func_004F8998(En1AA* e, s32 a, s32 b);
void func_004F48F0(En1AA* e);
void func_004F5588(En1AA* e);
void func_004F5BD8(En1AA* e, s32 a, s32 b);
struct En1AA {
    char p0[0x3dc];
    Vec3 m3dc;
    char p3e8[0x904 - 0x3e8];
    StateMgr mState;
    void f();
};
void En1AA::f() {
    if (!func_004F70A8(this)) return;
    s8 st = mState.mCur;
    if (st != 8 && st != 9) {
        if (func_004F8998(this, 0, 0)) mState.changeState(8);
    }
    mState.execute();
    func_004F8964(&m3dc.y, true, func_004F898C());
    func_004FB0D8(this, &m3dc.y);
    func_004F48F0(this);
    func_004F5588(this);
    func_004F5BD8(this, 0, 0);
}
