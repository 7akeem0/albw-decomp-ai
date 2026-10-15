// MATCH (finisher2): KB #155 solved - m8d4/m8d8 are 4-byte structs (Ang); struct copies plan an 8-bit-offset base (this+0x800) hoisted to the block start.
#define EN_EXTRA void f();
// agent8 round 5: enemy actor class whose vfuncs live at 0x200000-0x202000 (vtable around ro_00695470..0x695530)
typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;
typedef unsigned long long u64;

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

struct StateMgr { void changeState(int s) __attribute__((weak)); };

void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
s32 func_0068C690(const Vec3& v);   // angleFromVec
void func_0051D27C(s32* ang, s32 target, s32 step);
struct Obj70FB60 { char pad[0x1c]; Vec3* m1c; };
extern Obj70FB60* data_0070FB60;

struct Sub420 { char pad[0x22]; u8 m22; };
struct Sub424 { char pad[0x2c]; u32 m2c; };
struct Sub510 { char pad[4]; u8 m4; };

struct Ang { s32 v; Ang() {} Ang(s32 x) : v(x) {} };
void func_0051D27C(Ang* ang, s32 target, s32 step);
struct En;
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
void func_004F88A0(En* e, u32 v);
bool func_0058A8F0(En* e);
s32 func_0058AB74(En* e);
struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
s32 func_00588BE4(En* e);   // getActorId
void func_0014FAFC(En* e, s32 ang, f32 rate);
extern const s32 ro_006938F0;
void func_00150A84(En* e, const sead::SafeString& name, s32 v);

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    char p0[0x3a4];
    u32 m3a4;           // 0x3a4
    u32 p3a8;
    f32 m3ac;           // 0x3ac
    char p3b0[0x3d0 - 0x3b0];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    u32 m3e8;           // 0x3e8
    char p3ec[0x420 - 0x3ec];
    Sub420* m420;       // 0x420
    Sub424* m424;       // 0x424
    char p428[0x4e4 - 0x428];
    Vec3 m4e4;          // 0x4e4
    char p4f0[0x508 - 0x4f0];
    s16 m508;           // 0x508
    char p50a[0x510 - 0x50a];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    u32 m59c;           // 0x59c
    char p5a0[0x8bc - 0x5a0];
    Timer m8bc;         // 0x8bc
    Timer m8c8;         // 0x8c8
    Ang m8d4;           // 0x8d4
    Ang m8d8;           // 0x8d8
    StateMgr mState;    // 0x8dc
    u8 m8dd[3];
    u8 m8e0;            // 0x8e0
    u8 m8e1;            // 0x8e1
    char p8e2[0x910 - 0x8e2];
    u32 m910;           // 0x910
    u32 m914;
    Timer m918;         // 0x918
    Vec3 m924;          // 0x924
    u32 m930;
    s32 m934;           // 0x934
    s32 m938;           // 0x938
    s8 m93c;            // 0x93c (s8: base-reg ldrb in 0x200370)
    u8 m93d;            // 0x93d
    EN_EXTRA
};
void En::f() {
    if (func_00588BE4(this) == ro_006938F0 && !m93c) {
        if (data_0070FB60) {
            Vec3 d = *data_0070FB60->m1c - m3d0;
            m8d4 = Ang(func_0068C690(d));
        }
        func_0051D27C(&m8d8, m8d4.v, 0xb60b60);
        { Ang a = m8d8; func_0014FAFC(this, a.v, 0.01f); }
        *(Ang*)&m3e8 = m8d8;
    }
    if (func_0058A8F0(this)) mState.changeState(4);
}
