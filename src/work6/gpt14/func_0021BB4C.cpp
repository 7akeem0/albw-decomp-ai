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

struct EffRet { u32 a,b; };
struct Anim344 { EffRet start(const char*); };
extern const s32 ro_006939A8;
s32 func_00588BE4(En*);
void func_0014FAFC(En*,s32,f32);
extern Random* data_00715388;
struct Angle{s32 v;void add(s32 n){v+=n;} void sub(s32 n){v-=n;} };
struct En {
 void** vt; // 0x0
 char pad4[0x4];
 Vec3 m8; // 0x8
 char pad14[0x2C3];
 u8 m2d7; // 0x2D7
 char pad2D8[0x6C];
 Anim344* m344; // 0x344
 char pad348[0x20];
 Vec3 m368; // 0x368
 char pad374[0x5C];
 Vec3 m3d0; // 0x3D0
 Vec3 m3dc; // 0x3DC
 s32 m3e8; // 0x3E8
 char pad3EC[0x20];
 Model* m40c; // 0x40C
 char pad410[0xF0];
 s32 m500; // 0x500
 char pad504[0x4];
 s16 m508; // 0x508
 char pad50A[0x6];
 Sub510* m510; // 0x510
 char pad514[0x88];
 BitFlag32 m59c; // 0x59C
 char pad5A0[0x31C];
 StateMgr mState; // 0x8BC
 char pad8E0[0xA48];
 f32 m1328; // 0x1328
 f32 m132c; // 0x132C
 f32 m1330; // 0x1330
 f32 m1334; // 0x1334
 f32 m1338; // 0x1338
 char pad133C[0x14];
 Angle m1350; // 0x1350
 char pad1354[0xC];
 Timer m1360; // 0x1360
 s32 m136c; // 0x136C
 s8 m1370; // 0x1370
 s8 m1371; // 0x1371
 s8 m1372; // 0x1372
 bool m1373; // 0x1373
 s8 m1374; // 0x1374
 s8 m1375; // 0x1375
 s8 m1376; // 0x1376
 void startAnim(const char* n){if(m344)m344->start(n);}
 void func_0021BC14();
 void func_0021BF84(s32);
 void func_0021AE78();
 void func_0021BEF8();
 void func_0021A4F0();
 void func_0021BA8C();
 void func_0021BB4C();
 void func_0021ABB0();
 void func_0021BC40();
 void func_0021B518();
 EN_EXTRA
};

extern s32 data_0070ADD0;
void En::func_0021BB4C(){func_0021A4F0();func_0021ABB0();func_0021BC40();f32 zero=0.0f;if(m3dc.y<zero){if(!m1373)m1350.add(data_0070ADD0);else m1350.sub(data_0070ADD0);}if(zero>m3dc.y && m3d0.y<m8.y-6.0f)mState.changeState(0);m500=(s32)(m3dc.y*-5368709120.0f);}
