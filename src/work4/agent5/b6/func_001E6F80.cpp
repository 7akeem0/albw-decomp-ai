#include "../a5.h"
struct A { void f(); void g(); };  // g = 0x1E6F84
void A::f() { g(); }
