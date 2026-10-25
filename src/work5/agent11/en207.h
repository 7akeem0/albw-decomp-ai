// agent11 round 5: second enemy class with vfuncs/state fns at 0x2078D0-0x208000 (vtable around ro_006D286C,
// state PMF table around ro_00695F44.., StateMgr at +0x8bc with changeState 0x65D630).
#ifndef A11_EN207_H
#define A11_EN207_H
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
    void set(const Vec3& o) { *this = o; }
    void setXYZ(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
    void setZero() { for (int i = 0; i < 3; i++) (&x)[i] = 0.0f; }
    void setAdd(const Vec3& a, const Vec3& b);   // 0x115C54
    void setSub(const Vec3& a, const Vec3& b);   // 0x115C70
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
    bool isEnd() const { return cur >= max; }
};

struct BitFlag32 {
#ifdef BF_BITS
    union { u32 v; struct { u32 b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1, b7:1; } bits; };
#else
    u32 v;
#endif
    void set(u32 b) { v |= b; }
    void reset(u32 b) { v &= ~b; }
    void resetR(const u32& b) { v &= ~b; }
    // KB #184 (agent15): keeps consecutive bic/orr unmerged
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void setC(u32 m) { change(m, true); }
    void resetC(u32 m) { change(m, false); }
    void resetB(int n) { v &= ~(1u << n); }
    bool isOn(u32 b) const { return (v & b) != 0; }
};

struct StateMgr2 {
    u32 mCounter;
    char pad[0x24 - 4];
    void changeState(int s) __attribute__((weak));   // 0x65D630
};

struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }

struct Actor;
struct ActorMgr;
extern char* data_00706E20;
Actor* func_0052FBA0(ActorMgr* mgr, u32 handle);
s32 func_00588BE4(Actor* a);

struct Obj27C;
bool func_0036C45C(Obj27C* o);

struct Obj84 {
    Vec3 pos;
    bool update(const Vec3& p, f32 a, f32 b, f32 c);   // 0x4D838C
};
struct AnimElem { char pad[0x10]; f32 m10; };
struct AnimArr {
    char pad[0xc];
    s32 mNum;
    s32 mMax;
    AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
struct Sub510 { char pad[4]; u8 m4; u8 m5; };
struct En7;
Random* func_0058A7D4(En7* e);
void func_004FABDC(En7* e, s32 a, s32 b, s32 c);
void func_004FC07C(En7* e, s32 a, s32 b, s32 c);
void func_00588C14(En7* e, s32 a, s32 b);
void func_0020CE20(En7* e, s32 a);
void func_004F68AC(En7* e, s32 a);
bool func_0058A8F0(En7* e);
void func_004FB070(En7* e, f32 r);
void func_004FB4C4(En7* e, f32 r);
void func_001507D8(En7* e, const sead::SafeString& name, s32 v);   // playSE2

#ifndef EN7_EXTRA
#define EN7_EXTRA
#endif

struct En7 {
    char p0[0x3d0];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    s32 m3e8;           // 0x3e8
    char p3ec[0x508 - 0x3ec];
    s16 m508;           // 0x508
    char p50a[0x510 - 0x50a];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr2 mState;   // 0x8bc
    char p8e0[0x8e4 - 0x8e0];
    AnimArr* m8e4;      // 0x8e4
    char p8e8[0x9a0 - 0x8e8];
    Timer m9a0;         // 0x9a0
    char p9ac[0x9e0 - 0x9ac];
    s32 m9e0;           // 0x9e0
    char p9e4[0xa7c - 0x9e4];
    char mA7C[0x4];     // 0xa7c (Obj27C)
    char pa80[0xb70 - 0xa80];
    u8 mB70;            // 0xb70
    char pb71[0xb84 - 0xb71];
    Obj84 mB84;         // 0xb84 (pos Vec3 first)
    u32 mB90;           // 0xb90
    char pb94[0xba4 - 0xb94];
    u8 mBA4;            // 0xba4
    char pba5[0xbac - 0xba5];
    u32 mBAC;           // 0xbac
    Timer mBB0;         // 0xbb0
    char pbbc[0xbc8 - 0xbbc];
    u32 mBC8;           // 0xbc8
    char pbcc[0xc6c - 0xbcc];
    Timer mC6C;         // 0xc6c
    char pc78[0xc88 - 0xc78];
    Vec3 mC88;          // 0xc88
    f32 mC94;           // 0xc94
    f32 mC98;           // 0xc98
    char pc9c[0xd1c - 0xc9c];
    u32 mD1C;           // 0xd1c
    f32 mD20;           // 0xd20
    Vec3 mD24;          // 0xd24
    Vec3 mD30;          // 0xd30
    char pd3c[0xd44 - 0xd3c];
    AnimArr* mD44;      // 0xd44
    EN7_EXTRA
};
#endif
