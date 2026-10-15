#include "../a5.h"
struct A { void f(); char pad[0x784]; u16 m784; };
void func_0014DDEC(A* a);
void A::f() { if (m784 != 0) m784--; func_0014DDEC(this); }
