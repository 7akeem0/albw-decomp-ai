#include "a6_1e8.h"
struct Fwd_1E85D0 : Owner1C8 { void f(); };
// 0x1E85D0: m1C8->func_001E85D8() (tail call into the next function, NOPped by the linker)
void Fwd_1E85D0::f() { m1C8->func_001E85D8(); }
