// agent15 round 5: enemy class whose vfuncs/state fns live at 0x210CAC-0x212000
// (vtable ro_006D284C, 31 primary slots, 2nd base +0x320 -> vt+0x84; base vt ro_006EDB00;
//  state PMF table ro 0x6962E0..0x6963F0; StateMgr at +0x8BC, changeState 0x65D774)
// Same family as agent8/9/10 enemies (work5/shared_include/en200.h, work5/agent9/en202.h, work5/agent10/en204.h).
#ifndef A15_EN210_H
#define A15_EN210_H
#include "albw_types.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {}
    void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};

struct Timer {
    u32 cur;
    u32 max;
    f32 rate;
    void start(u32 n, u32 c = 0) {
        max = n;
        if (n) rate = 1.0f / n;
        else rate = 0.0f;
        cur = c;
    }
    bool step() {
        if (cur < max) { cur++; return true; }
        return false;
    }
};

struct BitFlag32 {
    u32 v;
    void set(u32 m) { v |= m; }
    void reset(u32 m) { v &= ~m; }
    bool isOn(u32 m) const { return (v & m) != 0; }
    // agent15: change(m,on) with a constant 'on' keeps consecutive orr/bic UNMERGED (orig shape 'orr #4; orr #0x80')
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void setB(u32 m) { change(m, true); }
    void resetB(u32 m) { change(m, false); }
};

struct En210;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgr {
    typedef void (En210::*Func)();
    s32 mCounter;        // +0  (0x8BC) signed compares (bxle/movgt) in 0x210F4C/0x2111B0
    s8 mCur;             // +4  (0x8C0)
    s8 mNext;            // +5  (0x8C1)
    u8 mNum;             // +6
    char pad7[0x10 - 7];
    Timeline* mTimeline; // +0x10
    En210* mOwner;       // +0x14
    Func* mEnter;        // +0x18
    Func* mExec;         // +0x1c
    Func* mExit;         // +0x20
    void changeState(int s) __attribute__((weak));   // 0x65D774
};

// Effect object (Eff) seen through EffHandle {Eff* p; u32 id} (KB #89/#96)
struct EffOwner { char p0[4]; s32 m4; char p8[0xc - 8]; u32 mc; char p10[0x280 - 0x10]; u8 m280; };
struct Eff {
    char p0[0x1c]; u32 m1c; EffOwner* m20; u32 m24; char p28[0x3c - 0x28]; u32 m3c;
};
struct EffHandle { Eff* p; u32 id; };
struct EH : EffHandle { EH() { p = 0; id = 0; } EH(Eff* a, u32 b) { p = a; id = b; } EH(const EffHandle& o) { p = o.p; id = o.id; } };
// inlined 'fade out' (0x210DB8/0x2111B0/0x210FB4): notify owner, then flags (f & ~4) | 8.
// The 1 stored to o->m280 is a PARAMETER (orig hoists 'mov r2,#1' before the owner null test).
inline void effFadeImpl(Eff* e, u8 v) {
    EffOwner* o = e->m20;
    if (o && e->m24 == o->mc && o->m4 > 0) o->m280 = v;
    e->m3c &= ~4;
    e->m3c |= 8;
}
// KB #96 validity test (const u32& id after the null test) + handle by POINTER (keeps &h in a reg: 'ldr r0,[r4,#0x98c]!')
inline bool effIsValid(const EffHandle* h) { if (h->p == 0) return false; const u32& id = h->id; return h->p->m1c == id; }
inline void effFade(EffHandle* h) { if (effIsValid(h)) effFadeImpl(h->p, 1); }
struct EffRet : EffHandle { u32 x; };
struct Anim344;
EffRet func_004A1B9C(Anim344* a, const char* name);
void func_00110848(Eff* e);      // kill
void func_004A2F38(Eff* e, const Vec3* pos);
void func_004A3138(Eff* e, const Vec3* pos);

struct Sub510 { char pad[4]; u8 m4; };
struct Obj8E0;   // sub-object at +0x8E0 (anim/model ctl): 0x3C26B8, 0x3C2630, 0x3C2680, 0x3C2464(o, s32, f32)
void func_003C26B8(Obj8E0* o);
void func_003C2630(Obj8E0* o);
void func_003C2680(Obj8E0* o);
void func_003C2464(Obj8E0* o, s32 a, f32 b);

void func_004FABDC(En210* e, s32 a, s32 b, s32 c);
void func_004FC07C(En210* e, s32 a, s32 b, s32 c);
void func_004FC570(En210* e);
void func_004FAD90(En210* e);
void func_002B1FB4(En210* e, s32 a, s32 b);
bool func_00521060(En210* e);
bool func_00588BF0(En210* e, s32 a);
bool func_0058A8F0(En210* e);
bool func_005211BC(En210* e, f32 a, f32 b);
void func_004F500C(En210* e);
void func_004F8638(En210* e, s32 v);
bool func_0058ACC8(En210* e, f32 r);
f32 func_0058AC38(En210* e);
void func_001507D8(En210* e, const sead::SafeString& name, s32 v);   // ActorBase::playSE2
void func_00150A84(En210* e, const sead::SafeString& name, s32 v);   // playSE

struct Actor { char pad[0x2cc]; u32 m2cc; };
struct ActorMgr {            // Game+0x3DBBC
    u32 mNum;
    Actor** mPtrs;
    u32 mFreeHint;
    Actor** mEnd;
};
Actor* func_0052FBA0(ActorMgr* mgr, u32 handle);   // ActorMgr::find
struct Game {
    Actor** findNext(s32 id, Actor** from);   // 0x5841A8
    char pad[0x3dbbc];
    ActorMgr actors;
};
extern Game* data_00706E20;

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En210 {
    char p0[8];
    Vec3 m8;            // 0x8
    char p14[0x2e - 0x14];
    u16 m2e;            // 0x2e
    u16 m30;            // 0x30
    char p32[0x344 - 0x32];
    Anim344* m344;      // 0x344
    char p348[0x368 - 0x348];
    Vec3 m368;          // 0x368
    char p374[0x3d0 - 0x374];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    u32 m3e8;           // 0x3e8
    char p3ec[0x500 - 0x3ec];
    char p500[8];
    s16 m508;           // 0x508 (ldrsh via this+0x500 base)
    char p50a[0x510 - 0x50a];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    // 0x8bc
    char m8e0[0x95c - 0x8e0];   // Obj8E0
    u8 m95c;            // 0x95c
    char p95d[0x960 - 0x95d];
    u32 m960;           // 0x960 actor handle
    u32 m964;           // 0x964
    char p968[0x96c - 0x968];
    u32 m96c;           // 0x96c
    Timer m970;         // 0x970
    char p97c[0x98c - 0x97c];
    EffHandle m98c;     // 0x98c
    Obj8E0* o8e0() { return (Obj8E0*)m8e0; }
    // KB #89 startEff (Cls 0x1DCF58 recipe): handle by pointer + name param
    void startEff(EffHandle* h, const char* name) {
        if (m344 == 0) { h->p = 0; h->id = 0; return; }
        if (effIsValid(h)) func_00110848(h->p);
        *h = func_004A1B9C(m344, name);
    }
    EN_EXTRA
};
#endif
