#include "a6_1e8.h"
struct Fwd_1E8500 : Owner1C8 { void f(); };
// 0x1E8500: m1C8->func_001E8508() (tail call into the next function, NOPped by the linker)
void Fwd_1E8500::f() { m1C8->func_001E8508(); }
