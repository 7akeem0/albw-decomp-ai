

typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
namespace sead {
template <typename T>
class SafeStringBase {
public:
    SafeStringBase(const T* s) : mStringTop(const_cast<T*>(s)) {}
    virtual ~SafeStringBase() {}
    virtual void assureTerminationImpl_() const {}
    T* mStringTop;
};
typedef SafeStringBase<char> SafeString;
}
struct Vec3 { f32 x, y, z; };
struct Sub2C { u8 m0; s8 m1; };
struct Msg { char pad[0x2c]; Sub2C* m2c; };
struct Act1D0;
struct Timeline { void func_00352210(bool b, f32 frame); };
struct StateMgrK {
    typedef void (Act1D0::*Func)();
    u32 mCounter;        
    s8 mCur;             
    s8 mNext;            
    u8 mNum;             
    char pad7[0x10 - 7];
    Timeline* mTimeline; 
    Act1D0* mOwner;      
    Func* mEnter;        
    Func* mExec;         
    Func* mExit;         
    inline void execute();
};
struct Timer {
    bool isEnd() const { return cur >= max; }
    u32 cur, max; f32 rate;
    void start(u32 n, u32 c = 0) { max = n; if (n) rate = 1.0f / n; else rate = 0.0f; cur = c; }
};
struct Sub570 { char pad[0x61]; u8 m61; void setM61(u8 v) { m61 = v; } };
struct Act1D0;
void func_0034C8F0(void* a, void* b, int c);
void func_001E47F4(Act1D0* self, bool b);          
bool func_00588C3C(Act1D0* self);                  
s32 func_0051E6D0(void* mgr, const Vec3* pos, f32 r);
extern void* data_0070B960;
extern void* data_00711F50;
void func_004EAF08(void* sndMgr, s32 v);
void func_00150A84(Act1D0* self, const sead::SafeString& se, s32 v);  
Vec3* func_00520FC0(Act1D0* self);                 
void func_001507D8(Act1D0* self, const sead::SafeString& se, s32 v);  
struct Player70FB60 { char pad[0x24]; u32* m24; };
extern Player70FB60* data_0070FB60;
void func_0052E32C(Player70FB60* p, const Vec3* pos);
bool func_005568F4(Player70FB60* p);

struct Act1D0 {
    char pad0[0x2d7];
    u8 m2d7;                 
    char pad2d8[0x391 - 0x2d8];
    u8 m391;                 
    char pad392[0x3a0 - 0x392];
    void* m3a0;              
    char pad3a4[0x3ac - 0x3a4];
    f32 m3ac;                
    char pad3b0[0x3d0 - 0x3b0];
    Vec3 pos;                
    Vec3 m3dc;               
    u32 m3e8;                
    char pad3ec[0x4f4 - 0x3ec];
    struct Mdl4F4* m4f4;     
    struct Ctl4F8* m4f8;     
    union {
    s32 m4fc;                
    StateMgrK mState;        
    };
    char pad520[0x524 - 0x520];
    void* m524;              
    char pad528[0x570 - 0x528];
    Sub570* m570;            
    void* m574;              
    char pad578[0x590 - 0x578];
    Vec3 m590;               
    Timer m59c;              
    char pad5a8[0x5b8 - 0x5a8];
    u32 m5b8;                
    char pad5bc[0x5c2 - 0x5bc];
    s16 m5c2;            
    f32 m5c4;                
    f32 m5c8;                
    f32 m5cc;                
    char pad5d0[0x5d9 - 0x5d0];
    u8 m5d9;                 
    u8 m5da;                 
    u8 m5db;
    u8 m5dc;                 
    u8 m5dd;
    u8 m5de;            
    u8 m5df;                 
    u8 m5e0;                 
    char pad5e1[0x63c - 0x5e1];
    u8 m63c;                 

    void func_001CFEF4(s32 anim, f32 blend);
    void func_001D1598();
    void func_001D0150(s32 anim, f32 a, f32 b);

    void func_001D1B20(bool b);

};
inline void StateMgrK::execute() {
    (mOwner->*mExec[mCur])();
    ++mCounter;
    if (mTimeline)
        mTimeline->func_00352210(true, (f32)mCounter);
}
struct Packed5{u8 a,b,g,r;};
struct Color4u8 {
    u8 r, g, b, a;
    Color4u8(u8 r_, u8 g_, u8 a_, u8 b_) : r(r_),g(g_),b(b_),a(a_) {}
    Color4u8(const Packed5&c) : r(c.r),g(c.g),b(c.b),a(c.a) {}
};
extern Packed5 data_0070F698;
struct MdlInfo { u32 m0; s32 m4; };
struct Mdl4F4 { char pad[0x20]; MdlInfo* m20; };
void func_004CF5DC(Mdl4F4* m, s32 i, s32 k, const Color4u8* c);
void Act1D0::func_001D1B20(bool b) {
    m5d9 = b;
    Color4u8 white(0xff, 0xff, 0xff, 0xff);
    u8 R=data_0070F698.r,G=data_0070F698.g,B=data_0070F698.b,A=data_0070F698.a;Color4u8 base(R,G,A,B);
    const Color4u8* c = b ? &white : &base;
    Mdl4F4* m = m4f4;
    if (m) {
        for (s32 i = 0; i < m->m20->m4; i++)
            func_004CF5DC(m, i, 2, c);
    }
}
