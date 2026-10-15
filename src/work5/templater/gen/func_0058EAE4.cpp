void ext_58EAE4(void*);
struct A_58EAE4 { virtual void a(); char pad[0x34]; };
struct B_58EAE4 { virtual void b(); };
struct C_58EAE4 : A_58EAE4, B_58EAE4 { virtual void b(); };
void C_58EAE4::b() { ext_58EAE4(this); }
