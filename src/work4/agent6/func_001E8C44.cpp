#include "a6_1e8.h"
struct Fwd_1E8C44 : Owner1C8 { void f(s32 a, s32 b); };
// 0x1E8C44: m1C8->func_001E8C4C(a, b) (tail call into the next function, NOPped by the linker)
void Fwd_1E8C44::f(s32 a, s32 b) { m1C8->func_001E8C4C(a, b); }
