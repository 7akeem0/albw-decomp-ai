#include "a6_1e8.h"
struct Fwd_1E8618 : Owner1C8 { void f(); };
// 0x1E8618: m1C8->func_001E8620() (tail call into the next function, NOPped by the linker)
void Fwd_1E8618::f() { m1C8->func_001E8620(); }
