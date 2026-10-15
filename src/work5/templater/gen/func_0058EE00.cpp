void ext_58EE00(void*);
struct A_58EE00 { virtual void a(); char pad[0x34]; };
struct B_58EE00 { virtual void b(); };
struct C_58EE00 : A_58EE00, B_58EE00 { virtual void b(); };
void C_58EE00::b() { ext_58EE00(this); }
