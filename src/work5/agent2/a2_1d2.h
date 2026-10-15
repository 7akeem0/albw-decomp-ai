// agent2 round 5: actor class Actor1D2 (vtable ro_6D1454: 28 primary slots, 2nd base at vt+0x78)
// derived from Actor1E4 (agent8). State funcs 0x1D0xxx-0x1D2xxx (PMF table 0x6A1B60..), StateMgr @+0x4FC
// (changeState 0x65C598, never tail-called -> weak). Hooks: A1D2_EXTRA (methods), A1E4_EXTRA, A1E4_INLINE_DTOR.
#ifndef A2_1D2_H
#define A2_1D2_H
#include "actor1e4_a2.h"

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

struct Timer {
    u32 cur, max;
    f32 rate;
    bool step() { if (max > cur) { cur++; return true; } return false; }
};

struct StateMgr4FC {
    __attribute__((weak)) void changeState(s32 st);  // 0x65C598
};

struct Obj5E4b {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();                  // 0x14
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual bool v10();                 // 0x28
};
struct Obj5E4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15();
    virtual Obj5E4b* v16();             // 0x40
};

struct G70D858 { char pad[0x70]; u8 m70; char pad71[0x2f4 - 0x71]; u8 m2F4; };
extern G70D858* data_0070D858;

class Actor1D2;
Vec3* func_00520FC0(Actor1D2* self);      // getPlayerPos (ignores this)
s32 func_0068C690(const Vec3& v);         // angleFromVec
bool func_00521018(Actor1D2* self);
void func_0051D2F4(s32* cur, s32 target, f32 rate, s32 a, s32 b);  // chase angle
void func_001507D8(Actor1D2* self, const sead::SafeString& se, s32 v);  // actor playSE

class Actor1D2 : public Actor1E4 {
public:
#ifdef A1D2_DTOR
    virtual ~Actor1D2();
#endif
    virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24();
    virtual void d25(); virtual void d26(); virtual void d27();
    void func_001D0150(s32 anim, f32 a, f32 b);
    void func_001D1598();                     // calcLiftScale
    bool func_001CFA58(s32 angle, f32 f);
#ifdef A1D2_EXTRA
    A1D2_EXTRA
#endif
    char pad4f2[0x4f8 - 0x4f2];
    void* m4F8;                               // anim ctl

    StateMgr4FC m4FC;
    char pad4fd[0x59c - 0x4fd];
    Timer m59C;
    char pad5a8[0x5b8 - 0x5a8];
#ifdef A1D2_ANGLE_T
    A1D2_ANGLE_T m5B8;                        // target angle
    A1D2_ANGLE_T m5BC;
#else
    s32 m5B8;                                 // target angle
    s32 m5BC;
#endif
    char pad5c0[2];
    s16 m5C2;
#ifdef A1D2_SPEED_T
    A1D2_SPEED_T m5C4;
#else
    f32 m5C4;
#endif
    char pad5c8[0x5d0 - 0x5c8];
    f32 m5D0;
    char pad5d4[0x5d7 - 0x5d4];
    u8 m5D7;
    char pad5d8[0x5da - 0x5d8];
    s8 m5DA;
    char pad5db[0x5df - 0x5db];
    u8 m5DF;
    u8 m5E0;
    char pad5e1[3];
    Obj5E4* m5E4;
    char pad5e8[0x63d - 0x5e8];
    u8 m63D;
};
#endif
