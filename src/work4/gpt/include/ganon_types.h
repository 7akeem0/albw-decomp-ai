#ifndef GPT_GANON_TYPES_H
#define GPT_GANON_TYPES_H

// Recovered partial layout for this translation unit. See ../REPORT.md.
#include "gpt_types.h"

// func_002ECAFC: MediumGanon attack state update (switch on state 8..18)

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

struct SinCosSample { f32 sin_val, sin_delta, cos_val, cos_delta; };
}
extern const sead::SinCosSample ro_006C3AB8[];

// Matching-source value wrappers; original class names are not established.
struct Step {
    s32 v;
    Step(s32 x) : v(x) {}
    operator s32() const { return v; }
};

// Matching-source helpers; their original class names are not established.
// Their value/reference boundaries preserve ARMCC's original VFP schedule.
struct Scalar {
    f32 v;
    Scalar(f32 x) : v(x) {}
    operator f32() const { return v; }
};

inline f32 interpolate(const f32& converted, f32 factor, const f32& value, f32 delta) {
    f32 r = converted * factor;
    return value + delta * r;
}
struct Parts {
    u32 low;
    u32 high;
    const sead::SinCosSample* table;
    Parts(const u32& idx)
        : low(idx & 0xffffff), high(idx >> 24), table(ro_006C3AB8) {}
    f32 get() const {
        const sead::SinCosSample& s = table[high];
        const f32& cv = (f32)low;
        return interpolate(cv, 1.0f / 0x1000000, s.cos_val, s.cos_delta);
    }
};
inline f32 cosIdx(const u32& idx) {
    Parts parts(idx);
    return parts.get();
}
inline f32 lerp(f32 a, const f32& b, const f32& t) {
    return a + (b - a) * t;
}

inline Scalar scaledStep(f32 a, f32 b) {
    return a * b;
}
struct Vec3 { f32 x, y, z; };
void func_00115C70(Vec3* o, const Vec3* a, const Vec3* b);   // setSub
void func_00115DAC(Vec3* o, const Vec3* a, const Vec3* b, f32 t); // *o = *b + *a * t

// Pointer references retain the case-15 argument setup after inlining.
__forceinline void subWrap(Vec3* const& d, const Vec3* a, const Vec3* const& b) {
    func_00115C70(d, a, b);
}

__forceinline void scaleWrap(const Vec3* a, Vec3* const& d, const Vec3* const& b, f32 t) {
    func_00115DAC(d, a, b, t);
}

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
    void start2(u32 n, u32 c = 0) {
        max = n;
        if (n == 0) rate = 0.0f;
        else rate = 1.0f / n;
        cur = c;
    }
    bool step() {
        if (cur < max) { cur++; return true; }
        return false;
    }
    f32 progress() const {
        f32 r;
        if (max == 0 || cur == 0) r = 0.0f;
        else if (max <= cur) r = 1.0f;
        else r = cur * rate;
        return r;
    }
};

struct Random { u32 getU32(); };
u32 func_00111A64(Random* r);
inline s32 randU32(Random* r, u32 max) { return ((u64)func_00111A64(r) * max) >> 32; }
struct RandMgr { char _0[0x660]; Random rnd; };
extern RandMgr* data_007124F0;

struct OtherEmpty {};
struct OtherBase { virtual void f(); };
struct Other : OtherEmpty, OtherBase {
    char _0[0x480];
    Vec3 m484;
    char _490[0x509 - 0x490];
    u8 b509;
};

struct ActorMgr { char _0[0x3dbbc]; u8 list; };
extern ActorMgr* data_00706E20;
OtherBase* func_0052FBA0(void* list, u32 id);

struct Ganon;
f32 func_0058A404(Ganon*);
s32 func_0058AB74(Ganon*);
bool func_0058A8F0(Ganon*);
s32 func_00548E78(Ganon*, s32, s32);
void func_004FABDC(Ganon*, s32, s32, s32);
Vec3* func_00520FC0(Ganon*);
void func_0014EB3C(Ganon*);
u32 func_0068C690(const Vec3*);
void func_0051D2F4(u32* angle, u32 target, s32, s32 step, f32 rate);
void func_0039DC1C(Other*, s32, s32);
void func_00150A84(Ganon*, const sead::SafeString&, s32);
void func_003A42B0(void* p, s32);
__attribute__((weak)) void func_006640EC(void* p, s32);
s32 func_002ECA34(Ganon*);
f32 func_0058AC38(Ganon*);


struct Ganon {
    char _0[0x3d0];
    Vec3 pos;           // 0x3d0
    char _3dc[0x3e8 - 0x3dc];
    u32 angle;          // 0x3e8
    char _3ec[0x8c8 - 0x3ec];
    u8 stateReq[0x24];  // 0x8c8
    u8 m8ec[0x220];     // 0x8ec
    Timer t0;           // 0xb0c
    char _b18[0xc];
    Timer t1;           // 0xb24
    char _b30[0xc90 - 0xb30];
    u32 targetId;       // 0xc90
    char _c94[0xd40 - 0xc94];
    u8 flag;            // 0xd40

    void update();
    __forceinline void turn(Vec3* const& tgt, f32 rate, const Step& step) {
        func_0014EB3C(this);
        Vec3 d;
        Vec3* dp = &d;
        subWrap(dp, tgt, &pos);
        d.y = 0.0f;
        func_0051D2F4(&angle, func_0068C690(&d), 0, step, rate);
    }
    __forceinline void updateImpl(f32 hp, u8 zero);
};

#endif
