#include "../a5.h"
struct A { u8 f(); u8 g(); };  // g = 0x1E68F0
u8 A::f() { return g(); }
