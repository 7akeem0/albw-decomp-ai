#include "../a5.h"
struct A { void f(); void g(u8 v); char pad[0x9f9]; u8 m9f9; };  // g = 0x1E6A54
void A::f() { g(m9f9); }
