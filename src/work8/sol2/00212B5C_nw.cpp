


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
    void setSub(const Vec3& a, const Vec3& b);   
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
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




    
    void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; }
    void set(u32 m) { change(m, true); }
    void reset(u32 m) { change(m, false); }

    bool isOn(u32 m) const { return (v & m) != 0; }
};




struct En;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgr {
    typedef void (En::*Func)();
    s32 mCounter;        
    s8 mCur;             
    s8 mNext;            
    u8 mNum;             
    char pad7[0x10 - 7];
    Timeline* mTimeline; 
    En* mOwner;          
    Func* mEnter;        
    Func* mExec;         
    Func* mExit;         
    void changeState(int s) ;   
};

struct Model;
struct Node;
Node* func_00584C14(Model* m, const sead::SafeString& name);
void func_004CEA18(Model* m, bool on, Node* n);
s32 func_0058AB74(En* e);
extern const Vec3 data_007A9260;   
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
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);  
f32 func_00115DC8(Vec3* v);           
s32 func_0068C690(const Vec3& v);   
bool func_0051D2F4(s32* cur, s32 target, f32 rate, s32 a, s32 b);   
struct Random;
u32 func_00111A64(Random* r);   
inline u32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
Random* func_0058A7D4(En* e);
Vec3* func_00520FC0(En* e);      
void func_00150A84(En* e, const sead::SafeString& name, s32 v);   
void func_001507D8(En* e, const sead::SafeString& name, s32 v);   
void func_004FAD90(En* e);
f32 func_004F898C();                         
void func_004F8964(f32* v, bool clamp, f32 g);
bool func_00521060(En* e);
bool func_005211BC(En* e, f32 a, f32 b);
void func_004FABDC(En* e, s32 a, s32 b, s32 c);
void func_004FC07C(En* e, s32 a, s32 b, s32 c);
bool func_00588BF0(En* e, s32 a);
void func_004FAB60(En* e, s32 a, s32 b);
extern s32 data_0070A8F0;
extern s32 data_0070A8EC;
void func_00115154(f32* s, f32* c, u32 ang);   
inline s32 Max(s32 a, s32 b) { return a > b ? a : b; }
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
inline void chase(f32& v, f32 target, s32 frames) { f32 t = target; f32 r = 1.0f / frames; v += (t - v) * r; }   





struct En {
    void** vt;
    char p4[0x2d7 - 4];
    u8 m2d7;            
    char p2d8[0x368 - 0x2d8];
    Vec3 m368;          
    char p374[0x3d0 - 0x374];
    Vec3 m3d0;          
    Vec3 m3dc;          
    s32 m3e8;           
    char p3ec[0x40c - 0x3ec];
    Model* m40c;        
    char p410[0x508 - 0x410];
    s16 m508;           
    char p50a[0x510 - 0x50a];
    Sub510* m510;       
    char p514[0x59c - 0x514];
    BitFlag32 m59c;     
    char p5a0[0x8bc - 0x5a0];
    StateMgr mState;    
    Obj8E0 m8e0;        
    char p8e1[0x910 - 0x8e1];
    s32 m910;           
    char p914[0x938 - 0x914];
    f32 m938;           
    char p93c[0x950 - 0x93c];
    u8 m950;            



    u8 m951;            

    s8 m952;            
    char p953[0x95c - 0x953];
    Timer m95c;         




    Timer m968;         
    f32 m974;           
    s32 m978;           

    char p97c[0x988 - 0x97c];
    Vec3 m988;          
    char p994[0x9bc - 0x994];
    s32 m9bc;           
    u8 m9c0;            
    u8 m9c1;            
    void func_0021319C(s32 a);
    void f(); void setVel();
};
inline void chase2(f32& v, f32 target, s32 frames) { f32 t = target; f32 r = 1.0f / frames; v += (t - v) * r; }
void En::setVel() { f32 s, c; func_00115154(&s, &c, m978); m3dc.x = m974 * s; m3dc.z = m974 * c; }
void sub4(Vec3*out,const Vec3&a,const Vec3&b){func_00115C70(out,a,b);}
void En::f() {
    if (!m95c.step()) mState.changeState(4);
    chase2(m974, 0.06f, Max(m95c.max - m95c.cur, 1));
    Vec3 d;
    Vec3*source=func_00520FC0(this);Vec3*out=&d;sub4(out,*source,m3d0);
    d.y = 0.0f;
    func_00115DC8(&d);
    func_0051D2F4(&m978, func_0068C690(d), 0.25f, 0, data_0070A8EC);
    setVel();
}
