void ext_58EB1C(void*);
struct A_58EB1C { virtual void a(); char pad[0x34]; };
struct B_58EB1C { virtual void b(); };
struct C_58EB1C : A_58EB1C, B_58EB1C { virtual void b(); };
void C_58EB1C::b() { ext_58EB1C(this); }
