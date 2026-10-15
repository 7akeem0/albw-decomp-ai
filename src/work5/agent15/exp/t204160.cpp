#define EN_EXTRA void f();
#include "../../agent10/en204.h"
inline void rs(BitFlag32& b, u32 m, bool on) { if (on) b.v |= m; else b.v &= ~m; }
void En::f() { rs(m59c, 4, false); rs(m59c, 0x80, false); rs(m59c, 1, false); rs(m59c, 2, false); m3dc.setZero(); }
