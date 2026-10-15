void ext_58EC7C(void*);
struct A_58EC7C { virtual void a(); char pad[0x34]; };
struct B_58EC7C { virtual void b(); };
struct C_58EC7C : A_58EC7C, B_58EC7C { virtual void b(); };
void C_58EC7C::b() { ext_58EC7C(this); }
