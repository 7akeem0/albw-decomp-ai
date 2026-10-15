#include "a6_1e8.h"
struct Fwd_1E8C74 : Owner1C8 { void f(s32 a); };
// 0x1E8C74: m1C8->func_001E8C7C(a) (tail call into the next function, NOPped by the linker)
void Fwd_1E8C74::f(s32 a) { m1C8->func_001E8C7C(a); }
