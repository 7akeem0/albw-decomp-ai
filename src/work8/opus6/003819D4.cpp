typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Timeline { void func_00352210(bool b, f32 frame); };
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
    void changeState(s32 s);   // 0x6678C0
};

struct Eff { char pad[0x1c]; u32 m1c; char pad20[0x3c - 0x20]; u32 m3c; };
void func_004A3700(Eff* e);
struct EffHandle;
bool func_005811E8(EffHandle* h);
struct EffHandle {
    Eff* p;
    u32 id;
    void fade() {
        if (func_005811E8(this) && p != 0 && p->m1c == id) {
            Eff* e = p;
            e->m3c = (e->m3c & ~0x44) | 8;
            func_004A3700(e);
        }
    }
};

f32 func_004F898C();
void func_004F8964(f32* vy, bool clamp, f32 g);

struct BitFlag32 { u32 v; void reset(u32 b) { v &= ~b; } };
struct Obj {
    virtual void v0();
    char pad4[0x3e0 - 4];
    f32 m3e0;
    char pad3e4[0x59c - 0x3e4];
    BitFlag32 m59c;
    char pad5a0[0x829 - 0x5a0];
    u8 m829;
    char pad82a[0xa48 - 0x82a];
    StateMgr<Obj> mState;
    char padA6C[0xaf4 - 0xa6c];
    u32 maf4;
    u32 maf8;
    char padAfc[0xb26 - 0xafc];
    u16 mb26;
    u16 mb28;
    char padB2a[0xb33 - 0xb2a];
    s8 mb33;
    char padB34[0xb44 - 0xb34];
    EffHandle h1;
    char padB4c[8];
    EffHandle h2;
    void fade(EffHandle* const& h) {
        if (func_005811E8(h) && h->p != 0 && h->p->m1c == h->id) {
            Eff* e = h->p;
            e->m3c = (e->m3c & ~0x44) | 8;
            func_004A3700(e);
        }
    }
    bool func_004F70A8();
    s32 func_004F8998(s32 a, s32 b);
    void func_004FB0D8(f32* vy);
    void func_004FAD90();
    void func_004F48F0();
    void func_004F5588();
    void func_004F5BD8(s32 a, s32 b);
    void func_0037FC58();
    void f();
    void impl(u8 one);
};

__forceinline void Obj::impl(u8 one) {
    if (mb26 != 0) {
        mb26--;
        if (mb26 == 1) fade(&h1);
    }
    if (mb28 != 0) {
        mb28--;
        if (mb28 == 1) fade(&h2);
    }
    if (mb33) m829 = one;
    if (!func_004F70A8()) return;
    s8 cur = mState.mCur;
    if (cur != 0 && cur != 1 && cur != 9 && cur != 10 && cur != 8) {
        if (maf8 > maf4 && func_004F8998(0, 0) != 0) mState.changeState(9);
    }
    mState.execute();
    func_004F8964(&m3e0, true, func_004F898C());
    func_004FB0D8(&m3e0);
    if (mState.mCur == 9 || mState.mCur == 10) {
        m59c.reset(8);
        func_004FAD90();
    }
    func_004F8964(&m3e0, true, func_004F898C());
    func_004F48F0();
    func_004F5588();
    func_004F5BD8(0, 0);
    func_0037FC58();
}
void Obj::f() { impl(1); }

