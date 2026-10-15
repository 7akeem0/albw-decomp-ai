#include "a6_1e8.h"
struct Fwd_1E8BDC : Owner1C8 { void f(s32 a); };
// 0x1E8BDC: m1C8->func_001E8BE4(a) (tail call into the next function, NOPped by the linker)
void Fwd_1E8BDC::f(s32 a) { m1C8->func_001E8BE4(a); }
