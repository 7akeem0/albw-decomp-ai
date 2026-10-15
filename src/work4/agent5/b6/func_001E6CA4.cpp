#include "../a5.h"
struct A { void f(); void g(); char pad[0x9f9]; u8 m9f9; };  // g = 0x1E6CBC
void func_00611B78(A* a);
void A::f() { if (m9f9 < 3) func_00611B78(this); else g(); }
