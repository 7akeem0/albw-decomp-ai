void ext_58EB2C(void*);
struct A_58EB2C { virtual void a(); char pad[0x34]; };
struct B_58EB2C { virtual void b(); };
struct C_58EB2C : A_58EB2C, B_58EB2C { virtual void b(); };
void C_58EB2C::b() { ext_58EB2C(this); }
