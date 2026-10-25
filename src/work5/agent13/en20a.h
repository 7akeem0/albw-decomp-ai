// agent13 round 5: enemy actor whose vfuncs/state fns live at 0x20A000-0x20C000
// (state PMF tables in ro around 0x695F9C..0x6961C4). StateMgr at +0x8BC, changeState 0x65D630.
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
    inline void normalize();
    inline void setMul(const Vec3& a, f32 s);
    inline void setDiv(const Vec3& a, f32 s);
    inline void mulSelf(f32 s);
    inline void divSelf(f32 s);
};
void func_00115D70(Vec3* out, const Vec3& a, f32 s);          // Vec3::setMul
void func_00115D88(Vec3* out, const Vec3& a, f32 s);          // Vec3::setDiv
f32 func_00115DC8(Vec3* v);                                   // Vec3::normalize
inline void Vec3::normalize() { func_00115DC8(this); }
inline void Vec3::setMul(const Vec3& a, f32 s) { func_00115D70(this, a, s); }
inline void Vec3::setDiv(const Vec3& a, f32 s) { func_00115D88(this, a, s); }
inline void Vec3::mulSelf(f32 s) { func_00115D70(this, *this, s); }
inline void Vec3::divSelf(f32 s) { func_00115D88(this, *this, s); }

// 4-byte struct holding a float (KB #141 style): store schedule differs from a plain f32
struct FVal { f32 v; FVal() {} FVal(f32 x) : v(x) {} };

struct Timer {
    u32 cur;
    u32 max;
    f32 rate;
    void start(u32 n, u32 c = 0) {
        max = n;
        if (n == 0) rate = 0.0f;   // this polarity puts 0.0f in s16 before 1.0f in s17 (0x20B820)
        else rate = 1.0f / n;
        cur = c;
    }
};

struct StateMgr { s32 mCounter; s8 mCur; s8 mNext; void changeState(int s) __attribute__((weak)); };
extern Vec3 bss_0073A6FC;

struct En;
struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
bool func_0058A8F0(En* e);
bool func_0058A474(En* e, s32 v);
void func_004FB4E0(En* e, f32 v);
void func_004FAD90(En* e);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
f32 func_004F944C();   // returns f32 const (-1e-5), no args
struct Obj708998;
void func_004ED46C(Obj708998* o, s32 v);
extern Obj708998* data_00708998;
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
s32 func_0068C690(const Vec3& v);   // angleFromVec
f32 func_004F898C();                // getGravity
void func_004F8964(f32* vy, bool clamp, f32 g);  // applyGravity
f32 func_0058AC38(En* e);
f32 func_0058AA40(En* e);
Vec3* func_00520FC0(En* e);      // getPlayerPos
void func_004D80A4(Vec3* out, s32 ang, f32 len);
bool func_0051D2F4(s32* cur, s32 tgt, f32 rate, s32 a, s32 b);   // chaseAngle
void func_0051D2CC(s32* cur, f32 rate, s32 tgt);   // arg order from literal-pool order (0x20A0F0)
void func_0051D39C(s32* ang, s32 target, s32 step);
struct SubA7C { bool func_0036BE48(); };

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    char p0[0x3d0];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    s32 m3e8;           // 0x3e8 angle
    char p3ec[0x470 - 0x3ec];
    Vec3 m470;          // 0x470
    char p47c[0x4e4 - 0x47c];
    Vec3 m4e4;          // 0x4e4
    f32 m4f0;           // 0x4f0
    char p4f4[0x508 - 0x4f4];
    s16 m508;           // 0x508
    char p50a[0x574 - 0x50a];
    f32 m574;           // 0x574
    char p578[0x59c - 0x578];
    u32 m59c;           // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    // 0x8bc
    char p8c4[0x994 - 0x8c4];
    Timer m994;         // 0x994
    char p9a0[0x9d8 - 0x9a0];
    u8 m9d8;            // 0x9d8
    char p9d9[0x9e4 - 0x9d9];
    s32 m9e4;           // 0x9e4 angle
    s32 m9e8;           // 0x9e8
    s32 m9ec;           // 0x9ec
    u8 m9f0;            // 0x9f0
    s8 m9f1;            // 0x9f1 (s8: this+0x900 base in 0x20BC84)
    char p9f2[0xa6c - 0x9f2];
    u8 ma6c;            // 0xa6c
    char pa6d[0xa7c - 0xa6d];
    SubA7C ma7c;        // 0xa7c
    char pa7d[0xb84 - 0xa7d];
    Vec3 mb84;          // 0xb84
    char pb90[0xc04 - 0xb90];
    Timer mc04;         // 0xc04
    f32 mc10;           // 0xc10
    s16 mc14[6];        // 0xc14
    char pc20[0xc44 - 0xc20];
    u32 mc44;           // 0xc44
    char pc48[0xc54 - 0xc48];
    u8 mc54;            // 0xc54
    char pc55[0xc5c - 0xc55];
    u32 mc5c;           // 0xc5c
    char pc60[0xc78 - 0xc60];
    u8 mc78;            // 0xc78
    char pc79[0xc88 - 0xc79];
    Vec3 mc88;          // 0xc88
    u32 pc94;
    FVal mc98;          // 0xc98 (struct: see 0x20BBE4)
    s32 mc9c;           // 0xc9c
    u32 mca0;           // 0xca0
    s32 mca4;           // 0xca4
    char pca8[0xd0c - 0xca8];
    Vec3 md0c;          // 0xd0c
    u8 md18;            // 0xd18
    u8 md19;            // 0xd19
    u8 md1a;            // 0xd1a
    u8 md1b;
    u32 md1c;           // 0xd1c
    char pd20[0xd24 - 0xd20];
    Vec3 md24;          // 0xd24
    Vec3 md30;          // 0xd30
    char pd3c[0xd4c - 0xd3c];
    Timer md4c;         // 0xd4c {cur,max,rate}
    void onF59c(u32 m) { m59c |= m; }
    void offF59c(u32 m) { m59c &= ~m; }
    EN_EXTRA
};
