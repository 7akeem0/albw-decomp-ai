#include "a6_1e8.h"
struct Fwd_1E8B20 : Owner1C8 { void f(); };
// 0x1E8B20: m1C8->func_001E8B28() (tail call into the next function, NOPped by the linker)
void Fwd_1E8B20::f() { m1C8->func_001E8B28(); }
