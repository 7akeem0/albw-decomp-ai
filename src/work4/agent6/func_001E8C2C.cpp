#include "a6_1e8.h"
struct Fwd_1E8C2C : Owner1C8 { void f(s32 a, s32 b, s32 c); };
// 0x1E8C2C: m1C8->func_001E8C34(a, b, c) (tail call into the next function, NOPped by the linker)
void Fwd_1E8C2C::f(s32 a, s32 b, s32 c) { m1C8->func_001E8C34(a, b, c); }
