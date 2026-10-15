// agent1 round 5: Kokko (Cucco) actor, state functions in 0x1D0000-0x1D2000
// (PMF table at ro 0x6A1B18..). Layout recovered field-by-field.
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
    u32 mCounter;        // +0
    s8 mCur;             // +4
    s8 mNext;            // +5
    u8 mNum;             // +6
    char pad7[0x10 - 7];
    Timeline* mTimeline; // +0x10
    Act1D0* mOwner;      // +0x14
    Func* mEnter;        // +0x18
    Func* mExec;         // +0x1c
    Func* mExit;         // +0x20
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
void func_001E47F4(Act1D0* self, bool b);          // base-class override (Actor1E4 area)
bool func_00588C3C(Act1D0* self);                  // ignores this
s32 func_0051E6D0(void* mgr, const Vec3* pos, f32 r);
extern void* data_0070B960;
extern void* data_00711F50;
void func_004EAF08(void* sndMgr, s32 v);
void func_00150A84(Act1D0* self, const sead::SafeString& se, s32 v);  // actor playSE
Vec3* func_00520FC0(Act1D0* self);                 // getPlayerPos (ignores this)
void func_001507D8(Act1D0* self, const sead::SafeString& se, s32 v);  // actor playSE (2)
struct Player70FB60 { char pad[0x24]; u32* m24; };
extern Player70FB60* data_0070FB60;
void func_0052E32C(Player70FB60* p, const Vec3* pos);
bool func_005568F4(Player70FB60* p);

#ifndef M5DETYPE
#define M5DETYPE u8
#endif
#ifndef S16TYPE
#define S16TYPE s16
#endif
struct Act1D0 {
    char pad0[0x2d7];
    u8 m2d7;                 // 0x2d7
    char pad2d8[0x391 - 0x2d8];
    u8 m391;                 // 0x391
    char pad392[0x3a0 - 0x392];
    void* m3a0;              // 0x3a0
    char pad3a4[0x3ac - 0x3a4];
    f32 m3ac;                // 0x3ac
    char pad3b0[0x3d0 - 0x3b0];
    Vec3 pos;                // 0x3d0
    Vec3 m3dc;               // 0x3dc
    u32 m3e8;                // 0x3e8 angle
    char pad3ec[0x4f4 - 0x3ec];
    struct Mdl4F4* m4f4;     // 0x4f4
    struct Ctl4F8* m4f8;     // 0x4f8 anim ctl
    union {
    s32 m4fc;                // 0x4fc = mState.mCounter
    StateMgrK mState;        // 0x4fc StateMgr (changeState 0x65C598)
    };
    char pad520[0x524 - 0x520];
    void* m524;              // 0x524
    char pad528[0x570 - 0x528];
    Sub570* m570;            // 0x570
    void* m574;              // 0x574
    char pad578[0x590 - 0x578];
    Vec3 m590;               // 0x590 (copy of pos)
    Timer m59c;              // 0x59c {cur,max,rate}
    char pad5a8[0x5b8 - 0x5a8];
    u32 m5b8;                // 0x5b8
    char pad5bc[0x5c2 - 0x5bc];
    S16TYPE m5c2;            // 0x5c2 (signed: ldrsh elsewhere)
    f32 m5c4;                // 0x5c4
    f32 m5c8;                // 0x5c8
    f32 m5cc;                // 0x5cc
    char pad5d0[0x5d9 - 0x5d0];
    u8 m5d9;                 // 0x5d9
    u8 m5da;                 // 0x5da
    u8 m5db;
    u8 m5dc;                 // 0x5dc
    u8 m5dd;
    M5DETYPE m5de;            // 0x5de wing-SE flag
    u8 m5df;                 // 0x5df
    u8 m5e0;                 // 0x5e0
    char pad5e1[0x63c - 0x5e1];
    u8 m63c;                 // 0x63c

    void func_001CFEF4(s32 anim, f32 blend);
    void func_001D1598();
    void func_001D0150(s32 anim, f32 a, f32 b);
#ifdef ACT_EXTRA
    ACT_EXTRA
#endif
};
inline void StateMgrK::execute() {
    (mOwner->*mExec[mCur])();
    ++mCounter;
    if (mTimeline)
        mTimeline->func_00352210(true, (f32)mCounter);
}
