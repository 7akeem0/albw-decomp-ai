#include "a6_1e8.h"
struct Fwd_1E8268 : Owner1C8 { void f(); };
// 0x1E8268: m1C8->func_001E8270() (tail call into the next function, NOPped by the linker)
void Fwd_1E8268::f() { m1C8->func_001E8270(); }
