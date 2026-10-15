void ext_58EF6C(void*);
struct A_58EF6C { virtual void a(); char pad[0x34]; };
struct B_58EF6C { virtual void b(); };
struct C_58EF6C : A_58EF6C, B_58EF6C { virtual void b(); };
void C_58EF6C::b() { ext_58EF6C(this); }
