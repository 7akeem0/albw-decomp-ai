// agent12 round 5: enemy actor whose vfuncs/state fns live at 0x208000-0x20A000
// (state PMF tables ro 0x695DF4..0x696234, vtable around ro_006D28A0). Same family as en200.h / en204.h / en202.h.
#ifndef A12_EN208_H
#define A12_EN208_H
#include "albw_types.h"

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Vec3;
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
void func_00115D70(Vec3* out, const Vec3& a, f32 s);          // Vec3::setMul
void func_00115D88(Vec3* out, const Vec3& a, f32 s);          // Vec3::setDiv
f32 func_00115DC8(Vec3* v);                                   // Vec3::normalize
struct V3U { f32 x, y, z; V3U& operator=(const V3U& o) { x = o.x; y = o.y; z = o.z; return *this; } };
struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {}
    void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    void normalize() { func_00115DC8(this); }
    void setMul(const Vec3& a, f32 s) { func_00115D70(this, a, s); }
    void setDiv(const Vec3& a, f32 s) { func_00115D88(this, a, s); }
    void setSub(const Vec3& a, const Vec3& b) { func_00115C70(this, a, b); }
    void mulSelf(f32 s) { func_00115D70(this, *this, s); }
    void divSelf(f32 s) { func_00115D88(this, *this, s); }
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
    void startR(const u32& n, const u32& c = 0) {
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
    bool stepR() { Timer c = *this; if (c.cur >= c.max) return false; cur = c.cur + 1; return true; }
    bool isEndC() const { Timer c = *this; return c.cur >= c.max; }
};

struct BitFlag32 {
    u32 v;
    void set(u32 b) { v |= b; }
    void reset(u32 b) { v &= ~b; }
    bool isOn(u32 b) const { return (v & b) != 0; }
};

struct En208;
struct StateMgr {
    s32 mCounter;        // +0 (signed compares)
    s8 mCur;             // +4
    s8 mNext;            // +5
    u8 mNum;             // +6
    char pad7[0x24 - 7];
    void changeState(int s) __attribute__((weak));   // 0x65D630
};

void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
void func_00115D70(Vec3* out, const Vec3& a, f32 s);          // Vec3::setMul
void func_00115D88(Vec3* out, const Vec3& a, f32 s);          // Vec3::setDiv
f32 func_00115DC8(Vec3* v);                                   // Vec3::normalize
s32 func_0068C690(const Vec3& v);   // angleFromVec
Vec3* func_00520FC0(En208* e);      // getPlayerPos
f32 func_004F944C();                // const -1e-5
f32 func_004F898C();                // gravity
void func_004F8964(f32* v, bool clamp, f32 g);
bool func_0058A8F0(En208* e);
f32 func_0058AC38(En208* e);
f32 func_0058AA40(En208* e);
void func_004FABDC(En208* e, s32 a, s32 b, s32 c);
void func_004FC570(En208* e);
void func_004FAD90(En208* e);
struct Vec3b : Vec3 { Vec3b(f32 a, f32 b, f32 c) { x = a; z = c; y = b; } };
inline void vmulS(Vec3& v, f32 s) { v.setMul(v, s); }
inline void vdivS(Vec3& v, f32 s) { v.setDiv(v, s); }
inline void copyVec(Vec3* d, const Vec3& s) { *d = s; }
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
void func_0020DBB8(En208* e);
void func_00150A84(En208* e, const sead::SafeString& name, s32 v);   // playSE

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct EffChild { char p0[4]; s32 m4; char p8[0xc - 8]; u32 mc; char p10[0x280 - 0x10]; u8 m280; };
struct Eff {
    char p0[0x1c];
    u32 m1c;            // id
    EffChild* m20;
    u32 m24;            // child id
    char p28[0x3c - 0x28];
    u32 m3c;            // flags
    bool childAlive() const { return m20 && m24 == m20->mc && m20->m4 > 0; }
    bool isPlaying() const {
        if (m3c & 4) return true;
        if (m3c & 0x40) return true;
        return childAlive();
    }
    void stopIf(u8 v) {
        if (isPlaying()) {
            if (childAlive()) m20->m280 = v;
            u32 f = m3c; f &= ~4; f |= 8; m3c = f;
        }
    }
    void stop() {
        if (childAlive()) m20->m280 = 1;
        u32 f = m3c; f &= ~4; f |= 8; m3c = f;
    }
};
struct EffHandle {
    Eff* p;
    u32 id;
    bool isValid() const { return p && p->m1c == id; }
};
struct SubSt { u32 v; };
inline SubSt mkSt(u32 x) { SubSt s; s.v = x; return s; }
extern u32 data_0070A798;
extern u32 data_0070A79C;
struct Turn9AC {        // at En208+0x9ac, update 0x37E4D0(this, s32 angleDelta)
    char p0[0x2c];
    u8 m2c;             // 0x9d8
    char p2d[0x34 - 0x2d];
    u32 m34;            // 0x9e0
    char p38[0x6c - 0x38];
    u32 m6c;            // 0xa18
    u32 m70;            // 0xa1c
    u32 m74;            // 0xa20
    Timer m78;          // 0xa24
    u32 m84;            // 0xa30
    u32 m88;            // 0xa34
    void begin(u32 n, u32 v) { m70 = m6c; m74 = v; m78.start(n); m88 = 0; }
    void beginR(u32 n, const u32& v) { m70 = m6c; m74 = v; m78.start(n); m88 = 0; }
    void beginP(u32 n, const u32* v) { m70 = m6c; m74 = *v; m78.start(n); m88 = 0; }
    void beginZ(u32 n, const u32& v, u32 z) { m70 = m6c; m74 = v; m78.start(n, z); m88 = z; }
    void beginA(u32 n, const u32& v) { m70 = m6c; m74 = v; m78.startR(n); m88 = 0; }
    void beginB(u32 n, const u32& v) { m70 = m6c; m74 = v; m88 = 0; m78.start(n); }
    void beginC(const u32& n, const u32& v) { m70 = m6c; m74 = v; m78.startR(n); m88 = 0; }
    void beginD(u32 n, const u32& v, u32 z) { m70 = m6c; m74 = v; m88 = z; m78.start(n, z); }
    void beginE(u32 n, const u32& v) { u32 z = 0; m70 = m6c; m74 = v; m88 = z; m78.start(n, z); }
    void beginF(u32 n, const u32& v) { m70 = m6c; m74 = v; m88 = 0; m78.startR(n); }
    void beginG(u32 n, const u32& v, const u32& z) { m70 = m6c; m74 = v; m88 = z; m78.startR(n, z); }
    void beginZ2(u32 n, const u32& v) { u32 z = 0; m70 = m6c; m74 = v; m78.start(n, z); m88 = z; }
};
void func_0037E4D0(Turn9AC* t, s32 a);
struct SinCosSample { f32 sin_val, sin_delta, cos_val, cos_delta; };
extern const SinCosSample ro_006C3AB8[];
struct SinParts { u32 low; u32 high; const SinCosSample* table;
    SinParts(const u32& idx) : low(idx & 0xffffff), high(idx >> 24), table(ro_006C3AB8) {}
    f32 get() const { const SinCosSample& s = table[high]; return s.sin_val + s.sin_delta * ((f32)low * (1.0f / 0x1000000)); } };
inline f32 sinIdx(const u32& idx) { SinParts p(idx); return p.get(); }
struct SinPartsR { u32 low; u32 high; f32 r; const SinCosSample* table;
    SinPartsR(const u32& idx) : low(idx & 0xffffff), high(idx >> 24), r((f32)low * (1.0f / 0x1000000)), table(ro_006C3AB8) {}
    f32 get() const { const SinCosSample& s = table[high]; return s.sin_val + s.sin_delta * r; } };
inline f32 sinIdxR(const u32& idx) { SinPartsR p(idx); return p.get(); }
extern Vec3 bss_0073A6FC;
struct ObjA7C;
void func_0036BE48(ObjA7C* o);
void func_0036BE78(ObjA7C* o);
struct Link6 { s16 id; s16 a; s16 b; };
struct Links4 {         // at actor+4
    char p0[0x4];
    Vec3 m8;            // actor+0x8 home pos
    char p10[0x58 - 0x10];
    u8 num;             // actor+0x5c
    u8 p59;
    Link6 e[4];         // actor+0x5e
};
struct Actor { char p0[0x2e0]; BitFlag32 m2e0; };
struct ActorMgr { Actor* find(s32 id, s32 a); };   // 0x52FBDC
struct Game { char pad[0x3dbbc]; ActorMgr mActorMgr; };
extern Game* data_00706E20;

struct En208 {
    char p0[0x4];
    Links4 mLinks;      // 0x4 (m8 home pos = mLinks.m8)
    void hideLinks() {
        Links4* l = &mLinks;
        for (int i = 0; i < l->num; i++) {
            if (l->e[i].id > 0) {
                Actor* a = data_00706E20->mActorMgr.find(l->e[i].id, 0);
                if (a) a->m2e0.set(2);
            }
        }
    }
    char p78[0x344 - 0x4 - sizeof(Links4)];
    void* m344;         // 0x344 Anim344*
    char p348[0x3d0 - 0x348];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    s32 m3e8;           // 0x3e8
    char p3ec[0x470 - 0x3ec];
    Vec3 m470;          // 0x470
    char p47c[0x4b5 - 0x47c];
    s8 m4b5;            // 0x4b5
    char p4b6[0x4f0 - 0x4b6];
    f32 m4f0;           // 0x4f0
    char p4f4[0x574 - 0x4f4];
    f32 m574;           // 0x574
    char p578[0x59c - 0x578];
    BitFlag32 m59c;     // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    // 0x8bc
    char p8e0[0x994 - 0x8e0];
    Timer m994;         // 0x994
    char p9a0[0x9ac - 0x9a0];
    Turn9AC m9ac;       // 0x9ac
    char pa38[0xa7c - 0xa38];
    char ma7c[0x10];    // 0xa7c ObjA7C (0x36BE48 / 0x36BE78)
    char pa8c[0xb84 - 0xa8c];
    Vec3 mb84;          // 0xb84
    char pb90[0xc78 - 0xb90];
    u8 mc78;            // 0xc78
    u8 getC78() const;  // out-of-line getter (linker-inlined ldrb)
    char pc79[0xc7c - 0xc79];
    Vec3 mc7c;          // 0xc7c
    Vec3 mc88;          // 0xc88 target pos
    char pc94[0xcc8 - 0xc94];
    EffHandle mcc8;     // 0xcc8
    char pcd0[0xd08 - 0xcd0];
    union { u32 md08; SubSt md08s; };  // 0xd08 sub-state (struct store does not share hoisted zeros)
    Vec3 md0c;          // 0xd0c
    char pd18[0xd1c - 0xd18];
    u32 md1c;           // 0xd1c sin phase
    f32 md20;           // 0xd20 amplitude
    Vec3 md24;          // 0xd24
    char pd30[0xd34 - 0xd30];
    f32 md34;           // 0xd34 base y
    char pd38[0xd6c - 0xd38];
    u32 md6c;           // 0xd6c
    u32 md70;           // 0xd70
    EN_EXTRA
};
#endif
