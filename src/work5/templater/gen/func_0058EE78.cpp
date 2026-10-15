void ext_58EE78(void*);
struct A_58EE78 { virtual void a(); char pad[0x34]; };
struct B_58EE78 { virtual void b(); };
struct C_58EE78 : A_58EE78, B_58EE78 { virtual void b(); };
void C_58EE78::b() { ext_58EE78(this); }
