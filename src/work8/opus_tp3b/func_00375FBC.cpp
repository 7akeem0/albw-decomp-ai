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
struct Vec3 { f32 x,y,z; };
struct Act { u8 p0[0x80]; u8 m80[0x164-0x80]; u32 m164; };
struct Owner { u8 pad[0x3d0]; Vec3 m3d0; u8 p3dc[0x3e8-0x3dc]; u32 m3e8; u8 p3ec[0x40c-0x3ec]; StateMgr mMgr; Act* m430; void func_0050FD14(); };
extern "C" void func_004D8AEC(void*, u32, Vec3*);
extern "C" void func_004CEAF0(Act*);
void Owner::func_0050FD14() { mMgr.exec(); Act* a = m430; a->m164 |= 0x40000000; func_004D8AEC(a->m80, m3e8, &m3d0); func_004CEAF0(m430); }
