void ext_58ECDC(void*);
struct A_58ECDC { virtual void a(); char pad[0x34]; };
struct B_58ECDC { virtual void b(); };
struct C_58ECDC : A_58ECDC, B_58ECDC { virtual void b(); };
void C_58ECDC::b() { ext_58ECDC(this); }
