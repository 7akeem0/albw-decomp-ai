typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007261C4;
extern "C" TypeInfo data_007261C8;
extern "C" const char ro_006F6500[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007261C4 & 1) && __cxa_guard_acquire(&data_007261C4)) {
        { TypeInfo* t = &data_007261C8; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007261C4);
    }
    return &data_007261C8;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
typedef float f32;
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
struct A : Obj { u8 pad[0x508 - 4]; s16 m508; u8 pad2[0x900 - 0x50a]; u8 m900; };
extern "C" char* data_00706E20;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
extern "C" void func_00659B98(StateMgr* m, s32 s);
struct Owner;
extern "C" void func_00197CA0(Owner*);
struct Owner {
    u8 pad[0x50]; u32 m50; u8 pad1[0x40c - 0x54]; StateMgr mMgr;
    void func_00197F1C();
};
void Owner::func_00197F1C()
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, m50);
    if (o == 0) {
        func_00659B98(&mMgr, 3);
    } else {
        if (!isDerived(o)) o = 0;
        A* a = static_cast<A*>(o);
        if (a && (a->m508 <= 0 || a->m900 == 20)) func_00659B98(&mMgr, 3);
    }
    mMgr.exec();
    func_00197CA0(this);
}
