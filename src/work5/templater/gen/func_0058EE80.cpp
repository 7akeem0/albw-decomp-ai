void ext_58EE80(void*);
struct A_58EE80 { virtual void a(); char pad[0x34]; };
struct B_58EE80 { virtual void b(); };
struct C_58EE80 : A_58EE80, B_58EE80 { virtual void b(); };
void C_58EE80::b() { ext_58EE80(this); }
