#include "../a5.h"
void func_004ECF6C(void* a);
struct A { void f(); void g(); };  // g = 0x1E692C
void A::f() { func_004ECF6C(this); g(); }
