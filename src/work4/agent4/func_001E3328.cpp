typedef unsigned char u8;
struct X { char pad[0x74]; u8 m74; void f(); };
void X::f() { m74 &= ~4; }
