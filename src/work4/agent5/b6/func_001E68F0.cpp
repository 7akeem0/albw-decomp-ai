#include "../a5.h"
struct A { u8 g(); char pad[0x475]; u8 m475; u8 m476; };
u8 A::g() { m476 = 1; return m475; }
