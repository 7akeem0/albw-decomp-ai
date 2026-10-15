

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
extern const Vec3 data_007A9260;   

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

struct En202;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgr {
    typedef void (En202::*Func)();
    u32 mCounter;        
    s8 mCur;             
    s8 mNext;            
    u8 mNum;             
    char pad7[0x10 - 7];
    Timeline* mTimeline; 
    En202* mOwner;       
    Func* mEnter;        
    Func* mExec;         
    Func* mExit;         
    void changeState(int s) ;   
    inline void execute();
};

void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  
s32 func_0068C690(const Vec3& v);   
bool func_0051D2F4(s32* cur, s32 target, f32 rate, s32 a, s32 b);   
struct Random;
u32 func_00111A64(Random* r);   
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En202* e);
Vec3* func_00520FC0(En202* e);      
struct Angle { s32 v; };
void func_0014FAFC(En202* e, Angle ang, f32 rate);
void func_00150A84(En202* e, const sead::SafeString& name, s32 v);   
void func_004FAD90(En202* e);
void func_004F68AC(En202* e);
f32 func_004F898C();                         
void func_004F8964(f32* v, bool clamp, f32 g);  
void func_004FB0D8(En202* e, f32* vy);
f32 func_00521274(En202* e);                  
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
void func_004FC218(En202* e, s32 a, s32 b, s32 c);
bool func_004F70A8(En202* e);
s32 func_0058A468(En202* e);
void func_004FC78C(En202* e, s32 v);
bool func_004F8998(En202* e, s32 a, s32 b);
void func_004F48F0(En202* e);
void func_004F5588(En202* e);
void func_004F5BD8(En202* e, s32 a, s32 b);
struct AngleT { s32 v; AngleT(s32 x) : v(x) {} };
u32 func_0058E2B8(const AngleT& a);   
struct Hit2035 { char pad[4]; Vec3 m4; };
void func_004F4A68(En202* e, Hit2035* h);
s32 func_002AB1CC(s32 a, s32 b, s32 c);

struct BitFlag32 {
    u32 v;
    void set(u32 m) { v |= m; }
    void reset(u32 m) { v &= ~m; }
    bool isOn(u32 m) const { return (v & m) != 0; }
};
struct Sub510 { char pad[4]; u8 m4; };
struct Mtx34 {
    f32 m[3][4];
    void makeT(const Vec3& t) {
        m[0][0] = 1.0f; m[0][1] = 0.0f; m[0][2] = 0.0f;
        m[1][0] = 0.0f; m[1][1] = 1.0f; m[1][2] = 0.0f;
        m[2][0] = 0.0f; m[2][1] = 0.0f; m[2][2] = 1.0f;
        m[0][3] = t.x;  m[1][3] = t.y;  m[2][3] = t.z;
    }
};
void func_001157FC(Mtx34* out, const Mtx34& a, const Mtx34& b);   
struct Model40C {
    char pad[0x80];
    Mtx34 mMtx;         
    char padB0[0x164 - 0xb0];
    u32 m164;           
    void setDirty() { m164 |= 0x40000000; }
    Mtx34& mtxW() { setDirty(); return mMtx; }
};
void func_004CEAF0(Model40C* m);
struct SinCosSample { f32 sin_val, sin_delta, cos_val, cos_delta; };
extern const SinCosSample ro_006C3AB8[];
inline f32 sinIdx(u32 idx) {
    u32 i = idx >> 24;
    f32 rest = (f32)(idx & 0xffffff) / 0x1000000;
    const SinCosSample& s = ro_006C3AB8[i];
    return s.sin_val + s.sin_delta * rest;
}
extern u32 data_0070A694;





struct En202 {
    char p0[8];
    Vec3 m8;            
    char p14[0x3d0 - 0x14];
    Vec3 m3d0;          
    Vec3 m3dc;          
    s32 m3e8;           
    char p3ec[0x40c - 0x3ec];
    Model40C* m40c;     
    char p410[0x510 - 0x410];
    Sub510* m510;       
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     
    BitFlag32 m5a0;     
    char p5a4[0x8bc - 0x5a4];
    StateMgr mState;    
    char p8e0[0x8f0 - 0x8e0];
    f32 m8f0;           
    f32 m8f4;           
    char p8f8[0x8fe - 0x8f8];
    u16 m8fe;           
    s32 m900;           
    u32 m904;           
    Angle m908;         
    Timer m90c;         
    Timer m918;         
    s8 m924;            
    u8 m925;            
    void move(f32 r, f32 t);   
    void f();
};

inline void StateMgr::execute() {
    (mOwner->*mExec[mCur])();
    ++mCounter;
    if (mTimeline)
        mTimeline->func_00352210(true, (f32)mCounter);
}
struct Parts {
    u32 low; u32 high; f32 r; const SinCosSample* table;
    Parts(const u32& i) : low(i & 0xffffff), high(i >> 24), r((f32)low * (1.0f / 0x1000000)), table(ro_006C3AB8) {}
    f32 get() const { const SinCosSample& s = table[high]; return s.sin_val + s.sin_delta * r; }
};
inline f32 sinIdx2(u32 idx) { return Parts(idx).get(); }inline void ap2(f32& v, f32 t, f32 r) { f32 d = t - v; v += d * r; }
void En202::f() {
    if (m3d0.y < m8.y - 0.1f) {
        m3d0.y = m8.y;
        m3dc.y = 0.0f;
    }
    func_004F68AC(this);
    s8 st = mState.mCur;
    if (st != 3 && st != 4) {
        u32 a = m904 + data_0070A694;
        m904 = a;
        ap2(m8f4, 1.0f + sinIdx2(a) * 0.4f, 0.3f);
    }
    Mtx34 t;
    t.makeT(Vec3(0.0f, m8f4, 0.0f));
    func_001157FC(&m40c->mtxW(), m40c->mMtx, t);
    func_004CEAF0(m40c);
}
