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
        f32 one=1.0f; if (n) rate = one / n;
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
    void changeState(int s) ;   // 0x65D8B8 (class A: 0x65D774)
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

struct EffRet { Eff* p;u32 id; };
void func_00110848(Eff*);
void func_004A2F38(Eff*,const void*);
void func_004FC570(En*);
struct Anim344 { EffRet start(const char*); };
extern const s32 ro_006939A8;
s32 func_00588BE4(En*);
void func_0014FAFC(En*,s32,f32);
extern Random* data_00715388;
struct Slot { Vec3 pos;s32 angle;s32 zero;f32 y; };
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
 BitFlag32 m5a0;char pad5A4[0x318];
 StateMgr mState; // 0x8BC
 char pad8E0[0xC4];Slot m9a4[100];
 Vec3 m1304v;Vec3 m1310;Vec3 m131c;
 f32 m1328; // 0x1328
 f32 m132c; // 0x132C
 f32 m1330; // 0x1330
 f32 m1334; // 0x1334
 f32 m1338; // 0x1338
 f32 m133c;s32 m1340;s32 m1344;s32 m1348;s32 m134c;
 s32 m1350; // 0x1350
 Timer m1354;
 Timer m1360; // 0x1360
 s32 m136c; // 0x136C
 s8 m1370; // 0x1370
 s8 m1371; // 0x1371
 s8 m1372; // 0x1372
 bool m1373; // 0x1373
 s8 m1374; // 0x1374
 s8 m1375; // 0x1375
 s8 m1376; // 0x1376
 EffHandle m1378;
 bool func_0021B638();
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
 void func_0021BDC0();void func_0021ACB8();void func_0021A59C(s32);void func_0021A2EC();
 void restartEff(EffHandle& h,const char* name){
 if(m344){if(h.p && h.p->m1c==h.id)func_00110848(h.p);EffRet r=m344->start(name);h.p=r.p;h.id=r.id;}else{h.p=0;h.id=0;}
 }
 EN_EXTRA
};

inline f32 randomRange(Random* r,f32 max){return (f32)func_00111A64(r)*(1.0f/4294967296.0f)*max;}
void En::func_0021ACB8(){
 f32 eleven=11.0f;m1328=eleven;m1350=0;m136c=0;f32 z=0.0f;m132c=z;
 for(int i=0;i<3;i++)(&m3dc.x)[i]=z;
 m59c.reset(1);m59c.reset(2);m59c.reset(0x20);m59c.set(0x40);
 func_004FAD90(this);m59c.reset(0x80);
 if(func_00588BE4(this)==ro_006939A8){m1360.start((u32)(randomRange(data_00715388,30.0f)+60.0f));m1354.start(30);}
 else{m1360.start((u32)(randomRange(data_00715388,50.0f)+100.0f));m1354.start(80);}
 m1374=0;func_004FC07C(this,0,-1,0);
}
