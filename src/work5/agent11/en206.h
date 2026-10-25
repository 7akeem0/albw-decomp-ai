// agent11 round 5: enemy actor whose vfuncs/state fns live at 0x206000-0x207898
// (vtable ro_006D2764, 31 primary slots, base EnemyBase vt ro_006EDB00, ctor 0x206FBC, D1 dtor 0x207898,
//  state PMF table at ro_00695BF0.., StateMgr at +0x8bc with changeState 0x65D4EC).
#ifndef A11_EN206_H
#define A11_EN206_H
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
    void setZero() { for (int i = 0; i < 3; i++) (&x)[i] = 0.0f; }
    void setAdd(const Vec3& a, const Vec3& b);   // 0x115C54
    void setMul(const Vec3& a, f32 s);           // 0x115D70
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
    void set(u32 b) { v |= b; }
    void reset(u32 b) { v &= ~b; }
    bool isOn(u32 b) const { return (v & b) != 0; }
};

struct StateMgr {
    u32 mCounter;
    char pad[0x24 - 4];
    void changeState(int s) __attribute__((weak));   // 0x65D4EC
};

struct Ang4 { s32 v; Ang4() {} Ang4(s32 x) : v(x) {} };
struct Param70A748 { u32 m0; u32 m4; s32 m8; u32 mC; };
#ifndef P748_DEF
extern Param70A748 data_0070A748;
#endif

struct Sub510 { char pad[4]; u8 m4; u8 m5; };
struct Sub43C { char pad[0x21]; s8 m21; };
struct Mdl;
struct Actor;
struct ActorMgr;
struct Game { char pad[0x3dbbc]; ActorMgr* dummy; };
extern char* data_00706E20;
Actor* func_0052FBA0(ActorMgr* mgr, u32 handle);
s32 func_00588BE4(Actor* a);
extern const s32 ro_00693170;

struct En;
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FAB60(En* e, s32 a, s32 b);
void func_004FB070(En* e, f32 r);
void func_004FB4C4(En* e, f32 r);
void func_004FACD4(En* e, s32 a);
void func_004FB0A4(En* e, f32 r);
void func_004FB4E0(En* e, f32 r);
s32 func_0058AB74(En* e);
bool func_00521018(En* e);
void func_004F88A0(En* e, u32 v);
void func_004F9554(Mdl* m, s32 a, s32 b, s32 c);
bool func_0058A8F0(En* e);
f32 func_0058AA40(En* e);
Vec3 func_004FBF58(En* e);
void func_00150A84(En* e, const sead::SafeString& name, s32 v);
s32 func_0058A468(En* e);
s32 func_004FC78C(En* e, s32 a);
struct Arg4F;
void func_004F4A68(En* e, Arg4F* p);
bool func_004F7BB8(En* e, Arg4F* p);

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    char p0[0x3a0];
    u32 m3a0;           // 0x3a0
    u32 m3a4;           // 0x3a4
    char p3a8[0x3d0 - 0x3a8];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    s32 m3e8;           // 0x3e8
    char p3ec[0x430 - 0x3ec];
    Mdl* m430;          // 0x430
    Mdl* m434;          // 0x434
    u32 p438;
    Sub43C* m43c;       // 0x43c
    char p440[0x4fc - 0x440];
#ifdef M4FC_STRUCT
    Ang4 m4fc;          // 0x4fc (4-byte struct: KB #141 store plan)
#else
    s32 m4fc;           // 0x4fc
#endif
    char p500[0x510 - 0x500];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     // 0x59c
    u32 m5a0;           // 0x5a0
    char p5a4[0x8bc - 0x5a4];
    StateMgr mState;    // 0x8bc
    char mDelegate[0x10];   // 0x8e0
    Vec3 m8f0;          // 0x8f0
    s32 m8fc;           // 0x8fc
    s32 m900;           // 0x900
    s8 m904;            // 0x904 (s8: this+0x900 base, ldrsb in 0x206E44)
    s8 m905;            // 0x905
    u16 p906;
    s32 m908;           // 0x908
    u32 m90c;           // 0x90c
    u8 m910;            // 0x910
    u8 m911;            // 0x911
    u16 m912;           // 0x912
    u32 m914;           // 0x914
    u8 m918;            // 0x918
    u8 p919[3];
    u32 m91c;           // 0x91c
    Timer m920;         // 0x920
    Timer m92c;         // 0x92c
    s32 m938;           // 0x938
    Vec3 m93c;          // 0x93c
    char p948[0x990 - 0x948];
    u8 m990;            // 0x990
    EN_EXTRA
};
#endif
