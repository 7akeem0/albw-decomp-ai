#include "a6_1e8.h"
struct Fwd_1E8A70 : Owner1C8 { void f(); };
// 0x1E8A70: m1C8->func_001E8A78() (tail call into the next function, NOPped by the linker)
void Fwd_1E8A70::f() { m1C8->func_001E8A78(); }
