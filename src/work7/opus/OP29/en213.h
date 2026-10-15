// agent16 round 5: "GueldMan" enemy (SE_GueldMan_*) whose state fns live at 0x212F18-0x214000
// (state PMF table ro 0x69690C..; vtable around ro_6D2B58; changeState 0x65D8B8 never tail-called -> weak)
// and its sibling class A at 0x212108-0x212F18 (state table ro 0x6962E8..; changeState 0x65D774).
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
    void setSub(const Vec3& a, const Vec3& b);   // 0x115C70
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
};

struct Timer {
    u32 cur;
    u32 max;
    f32 rate;
#ifdef TIMER_CREF
    void start(const u32& n, const u32& c = 0) {
#else
    void start(u32 n, u32 c = 0) {
#endif
        max = n;
        if (n) rate = 1.0f / n;
        else rate = 0.0f;
        cur = c;
    }
    bool step() {
        Timer t = *this;
        if (t.cur < t.max) { cur = t.cur + 1; return true; }
        return false;
    }
    bool step2b() {
        if (cur < max) { cur++; return true; }
        return false;
    }
    bool step3() {
        Timer t = *this;
        if (t.max > t.cur) { cur = t.cur + 1; return true; }
        return false;
    }
    bool step2() {
        if (max > cur) { cur++; return true; }
        return false;
    }
};

struct BitFlag32 {
    u32 v;
#ifdef BF_OOL
    void set(u32 m);      // define non-inline in the TU (BF_OOL_DEFS) -> no bic merging
    void reset(u32 m);
#else
    // agent15 KB #184: the if is resolved after constant combining -> separate orr/bic per call
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u32 m) { change(m, true); }
    void reset(u32 m) { change(m, false); }
#endif
    bool isOn(u32 m) const { return (v & m) != 0; }
};
#ifdef BF_OOL
#define BF_OOL_DEFS void BitFlag32::set(u32 m) { v |= m; } void BitFlag32::reset(u32 m) { v &= ~m; }
#endif

struct En;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgr {
    typedef void (En::*Func)();
    s32 mCounter;        // +0 (signed: ble in 0x212108)
    s8 mCur;             // +4
    s8 mNext;            // +5
    u8 mNum;             // +6
    char pad7[0x10 - 7];
    Timeline* mTimeline; // +0x10
    En* mOwner;          // +0x14
    Func* mEnter;        // +0x18
    Func* mExec;         // +0x1c
    Func* mExit;         // +0x20
    void changeState(int s) __attribute__((weak));   // 0x65D8B8 (class A: 0x65D774)
};

struct Model;
struct Node;
Node* func_00584C14(Model* m, const sead::SafeString& name);
void func_004CEA18(Model* m, bool on, Node* n);
s32 func_0058AB74(En* e);
extern const Vec3 data_007A9260;   // sead::Vector3f::zero
void func_001D6FD0(Vec3* pos, s32 a, s32 b, const Vec3& v, s32 e);
s32 func_0014DDEC(En* e);
struct Obj70B960;
extern Obj70B960* data_0070B960;
bool func_0051E6D0(Obj70B960* o, const Vec3* pos, f32 r);
struct Sub510 { char pad[4]; u8 m4; };
struct Obj8E0 {
    void func_003C2464(s32 n, f32 v);
    void func_003C26B8();
    void func_003C2680();
    void func_003C2630();
};

inline void copyVec(Vec3* d, const Vec3& s) { *d = s; }
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  // Vec3::setSub (out-of-line)
f32 func_00115DC8(Vec3* v);           // normalize
s32 func_0068C690(const Vec3& v);   // angleFromVec
bool func_0051D2F4(s32* cur, s32 target, f32 rate, s32 a, s32 b);   // chaseAngle
struct Random;
u32 func_00111A64(Random* r);   // sead::Random::getU32
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
Vec3* func_00520FC0(En* e);      // getPlayerPos
void func_00150A84(En* e, const sead::SafeString& name, s32 v);   // playSE
void func_001507D8(En* e, const sead::SafeString& name, s32 v);   // playSE2
void func_004FAD90(En* e);
f32 func_004F898C();                         // gravity constant
void func_004F8964(f32* v, bool clamp, f32 g);
bool func_00521060(En* e);
bool func_005211BC(En* e, f32 a, f32 b);
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
bool func_00588BF0(En* e, s32 a);
void func_004FAB60(En* e, s32 a, s32 b);
extern s32 data_0070A8F0;
extern s32 data_0070A8EC;
void func_00115154(f32* s, f32* c, u32 ang);   // sinCos
inline s32 Max(s32 a, s32 b) { return a > b ? a : b; }
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
inline void chase(f32& v, f32 target, s32 frames) { f32 t = target; f32 r = 1.0f / frames; v += (t - v) * r; }   // named t: target gets the low VFP reg (0x212B5C)

#ifndef EN_EXTRA
#define EN_EXTRA
#endif

struct En {
    void** vt;
    char p4[0x2d7 - 4];
    u8 m2d7;            // 0x2d7
    char p2d8[0x368 - 0x2d8];
    Vec3 m368;          // 0x368
    char p374[0x3d0 - 0x374];
    Vec3 m3d0;          // 0x3d0 pos
    Vec3 m3dc;          // 0x3dc vel
    s32 m3e8;           // 0x3e8 angle
    char p3ec[0x40c - 0x3ec];
    Model* m40c;        // 0x40c
    char p410[0x508 - 0x410];
    s16 m508;           // 0x508 life (ldrsh via register offset)
    char p50a[0x510 - 0x50a];
    Sub510* m510;       // 0x510
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     // 0x59c
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    // 0x8bc
    Obj8E0 m8e0;        // 0x8e0
    char p8e1[0x910 - 0x8e1];
    s32 m910;           // 0x910
    char p914[0x938 - 0x914];
    f32 m938;           // 0x938
    char p93c[0x950 - 0x93c];
    u8 m950;            // 0x950
#ifdef M951_S8
    s8 m951;
#else
    u8 m951;            // 0x951
#endif
    s8 m952;            // 0x952 (s8: 'add r1,this,#0x900; ldrb [r1,#0x52]' in 0x2132AC)
    char p953[0x95c - 0x953];
    Timer m95c;         // 0x95c
#ifdef CLASS_A
    char p968[0x970 - 0x968];
    Timer m970;         // 0x970 (class A)
#else
    Timer m968;         // 0x968
    f32 m974;           // 0x974
    s32 m978;           // 0x978
#endif
    char p97c[0x988 - 0x97c];
    Vec3 m988;          // 0x988
    char p994[0x9bc - 0x994];
    s32 m9bc;           // 0x9bc
    u8 m9c0;            // 0x9c0
    u8 m9c1;            // 0x9c1
    void func_0021319C(s32 a);
    EN_EXTRA
};
