// agent10 round 5: enemy actor whose vfuncs live at 0x204000-0x206000 (vtable ro_006D267C, 31 primary slots,
// base EnemyBase vtable ro_006EDB00 / D1 0x4FDDB4). Same family as agent8's En (work5/shared_include/en200.h).
#ifndef A10_EN204_H
#define A10_EN204_H
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
    bool stepC() { Timer c = *this; if (c.cur < c.max) { cur = c.cur + 1; return true; } return false; }
    bool stepC2() { Timer c = *this; if (c.max > c.cur) { cur = c.cur + 1; return true; } return false; }
};

struct BitFlag32 {
    u32 v;
    void set(u32 b) { v |= b; }
    void reset(u32 b) { v &= ~b; }
    bool isOn(u32 b) const { return (v & b) != 0; }
};

struct StateMgr { void changeState(int s) __attribute__((weak)); };

struct Sub424 { char pad[0x2c]; u32 m2c; };
struct Sub510 { char pad[4]; u8 m4; };

struct En;
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
void func_004FB4E0(En* e, f32 r);
void func_004F88A0(En* e, u32 v);
void func_004F8638(En* e, s32 v);
struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
bool func_00588BF0(En* e, s32 a);
bool func_00521100(En* e, f32 a);
f32 func_00521298(En* e);
void func_004FC5EC(En* e, s32 a);
bool func_0058A8F0(En* e);
bool func_0058ACC8(En* e, f32 r);
bool func_00588C3C(En* e);
void func_004FACD4(En* e, s32 a);
void func_004F68AC(En* e, s32 a);
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
inline f32 distSqXZ(const Vec3& a, const Vec3& b) { f32 dx = b.x - a.x; f32 dz = b.z - a.z; return dx * dx + dz * dz; }
void func_0014EB3C(En* e);     // update m374 from m3e8 (sinCos)
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub
void func_00115D70(Vec3* out, const Vec3& a, f32 s);         // Vec3::setMul
f32 func_00115DC8(Vec3* v);                                   // Vec3::normalize
s32 func_004905E0(f32 t);                                     // atanIdx
void func_0051D2F4(u32* cur, s32 tgt, f32 rate, s32 a, s32 b); // chaseAngle
inline s32 atan2Idx(f32 y, f32 x) {
    if (x == 0.0f && y == 0.0f) return 0;
    if (x >= 0.0f) {
        if (y >= 0.0f) {
            if (x >= y) return func_004905E0(y / x);
            else return 0x40000000 - func_004905E0(x / y);
        } else {
            if (x >= -y) return -func_004905E0(-y / x);
            else return 0xc0000000 + func_004905E0(x / -y);
        }
    } else {
        if (y >= 0.0f) {
            if (-x >= y) return 0x80000000 - func_004905E0(y / -x);
            else return 0x40000000 + func_004905E0(-x / y);
        } else {
            if (x <= y) return 0x80000000 + func_004905E0(y / x);
            else return 0xc0000000 - func_004905E0(x / y);
        }
    }
}
void func_0051D27C(u32* ang, s32 target, s32 step);
void func_0014FAFC(En* e, s32 ang, f32 rate);
struct G70A6C8 { u32 m0; u32 m4; };
extern G70A6C8 data_0070A6C8;
inline f32 randF(Random* r, f32 m) { return func_00111A64(r) * 2.3283064e-10f * m; }
void func_00150A84(En* e, const sead::SafeString& name, s32 v);

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    char p0[0x8];
    Vec3 m8;            // 0x8
    char p14[0x2e - 0x14];
    u16 m2e;            // 0x2e
    u16 m30;            // 0x30
    char p32[0x374 - 0x32];
    Vec3 m374;          // 0x374 (front dir, set from m3e8 by 0x14EB3C)
    char p380[0x3a4 - 0x380];
    u32 m3a4;           // 0x3a4
    char p3a8[0x3d0 - 0x3a8];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    u32 m3e8;           // 0x3e8
    char p3ec[0x424 - 0x3ec];
    Sub424* m424;       // 0x424
    char p428[0x4e4 - 0x428];
    Vec3 m4e4;          // 0x4e4
    char p4f0[0x508 - 0x4f0];
    s16 m508;           // 0x508 (ldrsh via this+0x500 base)
    char p50a[0x510 - 0x50a];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     // 0x59c (direct u32 RMW gives a split add #0x400/#0x19c address)
    char p5a0[0x829 - 0x5a0];
    u8 m829;            // 0x829
    char p82a[0x8bc - 0x82a];
    union { f32 m8bc; u32 m8bcU; };  // 0x8bc (f32 in 204F78, int zero store in 205F48)
    char p8c0[0x8c4 - 0x8c0];
    f32 m8c4;           // 0x8c4
    u8 m8c8;            // 0x8c8
    u8 p8c9;
    s16 m8ca;           // 0x8ca (ldrsh in 2050BC)
    u16 m8cc;           // 0x8cc
    u16 p8ce;
    u32 m8d0;           // 0x8d0
    Timer m8d4;         // 0x8d4
    Timer m8e0;         // 0x8e0
    s32 m8ec;           // 0x8ec
    StateMgr mState;    // 0x8f0
    char p8f1[0x8fc - 0x8f1];
    u32 m8fc;           // 0x8fc
    u32 m900;           // 0x900
    s8 m904;            // 0x904 (ldrsb via this+0x900 base)
    s8 m905;            // 0x905 (s8: store m911 before the load only with s8)
    char p906[0x911 - 0x906];
    u8 m911;            // 0x911
    EN_EXTRA
};
#endif
