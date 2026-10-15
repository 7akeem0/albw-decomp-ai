void ext_58EC4C(void*);
struct A_58EC4C { virtual void a(); char pad[0x34]; };
struct B_58EC4C { virtual void b(); };
struct C_58EC4C : A_58EC4C, B_58EC4C { virtual void b(); };
void C_58EC4C::b() { ext_58EC4C(this); }
