// Common byte-verified shapes shared across many matched functions.
//
// These are recovered stand-in types, not original SDK names. Every inline
// member below reproduced its bytes in at least one matched function; the
// toggle macros record the variants that were needed in different files.
// Uncalled inline members generate no code, so a superset here is safe.
//
// Toggles (define before including):
//   TIMER_CREF - Timer::start takes (const u32&, const u32&) instead of by
//                value. Lesson: by-value start gave swapped r1/r2 at 0x1D6924.
//   BF_OOL     - BitFlag32::set/reset are declared out-of-line (define the
//                bodies via BF_OOL_DEFS in the TU) so consecutive bic/orr
//                are not merged by armcc.

#ifndef ALBW_COMMON_H
#define ALBW_COMMON_H

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
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
    void setZero() { for (int i = 0; i < 3; i++) (&x)[i] = 0.0f; }
    void setSub(const Vec3& a, const Vec3& b);   // outlined: 0x115C70
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

#endif
