// agent14 round 5: enemy actor whose vfuncs live at 0x20C000-0x20E000
// (vtable around ro_006D2854..0x6D28C4, 2nd base vptr at +0x320 (0x6D28C8 offset -0x320);
//  state PMF tables ro_00695DCC..0x696124). Same family as agent8 en200.h / agent10 en204.h.
// StateMgr at +0x8BC (changeState 0x65D630, never tail-called -> weak).
// Sub-object at +0xA7C (methods 0x36B708 / 0x36B758 / 0x36BA20 / 0x36BE78 / 0x36C408).
#ifndef A14_EN20C_H
#define A14_EN20C_H
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
    void setV(const Vec3& o) { *this = o; }
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
    bool stepC2() { Timer c = *this; if (c.max > c.cur) { cur = c.cur + 1; return true; } return false; }
    bool isEndC() const { Timer c = *this; return c.cur >= c.max; }
    bool isEnd() const { return cur >= max; }
};

struct BitFlag32 {
    u32 v;
    void set(u32 b) { v |= b; }
    void reset(u32 b) { v &= ~b; }
    bool isOn(u32 b) const { return (v & b) != 0; }
};

struct StateMgr { s32 mCounter; s8 mCur; s8 mNext; u8 pad6[2]; void changeState(int s) __attribute__((weak)); };

struct SubA7C;   // object at +0xA7C
void func_0036B708(SubA7C* s);
void func_0036B758(SubA7C* s);
void func_0036BA20(SubA7C* s);
bool func_0036BE78(SubA7C* s);
void func_0036C408(SubA7C* s, u32 v);
extern const u32 ro_00693980;

struct Obj18;
void func_001E8500(Obj18* o, const Vec3* p, s32 a, f32 r);
struct Obj708998 { char pad[0x18]; Obj18* m18; };
extern Obj708998* data_00708998;
void func_004ED46C(Obj708998* o, s32 v);

struct EffOwner {
    char pad[4];
    s32 m4;
    char pad8[4];
    u32 mc;
    char pad10[0x280 - 0x10];
    u8 m280;
};
struct Eff {
    char pad[0x1c];
    u32 m1c;
    EffOwner* m20;
    u32 m24;
    char pad28[0x3c - 0x28];
    u32 m3c;
};
struct EffHandle {
    Eff* p;
    u32 id;
#ifdef EFFHANDLE_EXTRA
    EFFHANDLE_EXTRA
#endif
};

struct Anim344;
struct EffRet : public EffHandle { u32 x; };
EffRet func_004A1B9C(Anim344* a, const char* name);   // Anim344::start
void func_00110848(Eff* e);                            // kill
inline void copyVec(Vec3* d, const Vec3& s) { *d = s; }
struct Anim8E0;
void func_00169A80(Anim8E0* a);
void func_00168E9C(Anim8E0* a, u32 b, s32 c);
struct Obj8E8;
void func_004F6DA0(Obj8E8* o);
const Vec3* func_00588F08(Obj708998* o);

struct Req5C {
    Req5C(u16 id, u32 arg, bool flag);   // 0x2C11E8, out-of-line, 0x5C bytes
    u32 m[0x5C / 4];
};
struct Anim410;
void func_0016898C(Anim410* t, const Req5C& r);
// u16 flag word whose RMW compiles to 'ldrh r1,[r0,#0x38]!; bic; strh r1,[r0]' (writeback):
// reset() must ASSIGN a constructed temp to *this, and be called through a pointer local.
struct BF16 { u16 v; BF16() {} BF16(u16 x) : v(x) {} void reset(u16 b) { *this = BF16(v & ~b); } void set(u16 b) { *this = BF16(v | b); } };
struct Sub510 { char pad[0x38]; BF16 m38; };
extern Vec3 bss_0073A6FC;
void func_0036BE48(SubA7C* s);

// agent12's Links4 (work5/agent12/en208.h): actor+4 params, linked actor ids at actor+0x5e
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

void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
void func_00115C54(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setAdd
inline Vec3 operator+(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C54(&r, a, b); return r; }
void func_00115D70(Vec3* out, const Vec3& a, f32 s);  // Vec3::setMul
inline Vec3 operator*(const Vec3& a, f32 s) { Vec3 r; func_00115D70(&r, a, s); return r; }
f32 func_00115DC8(Vec3* v);  // Vec3::normalize (returns length)
s32 func_0068C690(const Vec3& v);   // angleFromVec
struct AngleT { s32 v; AngleT(s32 x) : v(x) {} };
u32 func_0058E2B8(const AngleT& a);  // abs angle
struct V3U { f32 x, y, z; V3U& operator=(const Vec3& o) { x = o.x; y = o.y; z = o.z; return *this; } operator const Vec3&() const { return *(const Vec3*)this; } };
struct Flags2C { char pad[0x2c]; BitFlag32 m2c; };
struct Obj8F0 { char pad[0x30]; Flags2C* m30; };
void func_004F707C(Obj8F0* o, const Vec3* pos, const Vec3* scale, s32 a, s32 b);

struct Hit20 { Hit20(); char pad[0x18]; f32 m18; u32 m1c; };   // ctor 0x4F8738 (0x20 B)

struct En;
void func_0020E30C(En* e);
bool func_0053114C(En* e, s32 ang, Hit20* h, const f32& r);
Vec3* func_00520FC0(En* e);  // getPlayerPos
s32 func_0058AB74(En* e);
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
void func_004FAD90(En* e);
bool func_0058A8F0(En* e);
f32 func_0058AC38(En* e);
void func_004FB070(En* e, f32 v);
void func_004FB4C4(En* e, f32 v);
struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
void func_00150A84(En* e, const sead::SafeString& name, s32 v);

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    char p0[0x4];
    Links4 mLinks;      // 0x4
    void showLinks() {
        Links4* l = &mLinks;
        for (int i = 0; i < l->num; i++) {
            if (l->e[i].id > 0) {
                Actor* a = data_00706E20->mActorMgr.find(l->e[i].id, 0);
                if (a) a->m2e0.reset(2);
            }
        }
    }
    char p78[0x344 - 0x4 - sizeof(Links4)];
    struct Anim344* m344; // 0x344
    char p348[0x3d0 - 0x348];
    Vec3 m3d0;          // 0x3d0
    Vec3 m3dc;          // 0x3dc
    u32 m3e8;           // 0x3e8
    char p3ec[0x40c - 0x3ec];
    u32 m40c;           // 0x40c
    Anim410* m410;      // 0x410
    char p414[0x4c4 - 0x414];
    f32 m4c4;           // 0x4c4
    char p4c8[0x510 - 0x4c8];
    Sub510* m510;       // 0x510
    char p514[0x570 - 0x514];
    Vec3 m570;          // 0x570 (y = 0x574)
    char p57c[0x59c - 0x57c];
    BitFlag32 m59c;     // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    // 0x8bc
    char p8c4[0x8e0 - 0x8c4];
    Anim8E0* m8e0;      // 0x8e0
    Anim8E0* m8e4;      // 0x8e4
    Obj8E8* m8e8;       // 0x8e8
    char p8ec[0x8f0 - 0x8ec];
    Obj8F0* m8f0;       // 0x8f0
    Vec3 m8f4;          // 0x8f4
    Vec3 m900[15];      // 0x900 (indexed by s8 mb94)
    Vec3 m9b4;          // 0x9b4
    char p9c0[0x9d8 - 0x9c0];
    u8 m9d8;            // 0x9d8
    char p9d9[0xa7c - 0x9d9];
    char ma7c[0xb84 - 0xa7c];  // SubA7C (size unknown)
    Vec3 mb84;          // 0xb84
    u32 mb90;           // 0xb90
    s8 mb94;            // 0xb94
    char pb95[3];
    Vec3 mb98;          // 0xb98
    u8 mba4;            // 0xba4
    char pba5[3];
    f32 mba8;           // 0xba8
    char pbac[0xbbc - 0xbac];
    Timer mbbc;         // 0xbbc
    u32 mbc8;           // 0xbc8
    char pbcc[0xbe4 - 0xbcc];
    f32 mbe4;           // 0xbe4
    char pbe8[0xbf4 - 0xbe8];
    u32 mbf4;           // 0xbf4
    Vec3 mbf8;          // 0xbf8
    char pc04[0xc20 - 0xc04];
    u8 mc20;            // 0xc20
    Vec3 mc24;          // 0xc24
    s32 mc30;           // 0xc30
    char pc34[0xc38 - 0xc34];
    u8 mc38;            // 0xc38
    char pc39[0xc54 - 0xc39];
    u8 mc54;            // 0xc54
    char pc55[0xc88 - 0xc55];
    V3U mc88;           // 0xc88
    char pc94[0xc98 - 0xc94];
    f32 mc98;           // 0xc98
    char pc9c[0xd18 - 0xc9c];
    u8 md18;            // 0xd18
    u8 md19;            // 0xd19
    char pd1a[0xd1c - 0xd1a];
    s32 md1c;           // 0xd1c
    f32 md20;           // 0xd20
    Vec3 md24;          // 0xd24
    Vec3 md30;          // 0xd30
    EffHandle md3c;     // 0xd3c
    char pd44[0xda0 - 0xd44];
    u16 mda0;           // 0xda0
    char pda2[0xda4 - 0xda2];
    Timer mda4;         // 0xda4
    u8 mdb0;            // 0xdb0
    SubA7C* subA7C() { return (SubA7C*)ma7c; }
    EN_EXTRA
};
#endif
