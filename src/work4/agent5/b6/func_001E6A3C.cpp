#include "../a5.h"
struct A { void g(); char pad[0x784]; u16 m784; };
void A::g() { m784 = 30; }
