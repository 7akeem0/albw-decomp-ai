#include "a6_1e8.h"
struct Fwd_1E8C5C : Owner1C8 { void f(); };
// 0x1E8C5C: m1C8->func_001E8C64() (tail call into the next function, NOPped by the linker)
void Fwd_1E8C5C::f() { m1C8->func_001E8C64(); }
