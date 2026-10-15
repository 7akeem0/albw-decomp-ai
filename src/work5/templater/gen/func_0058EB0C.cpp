void ext_58EB0C(void*);
struct A_58EB0C { virtual void a(); char pad[0x34]; };
struct B_58EB0C { virtual void b(); };
struct C_58EB0C : A_58EB0C, B_58EB0C { virtual void b(); };
void C_58EB0C::b() { ext_58EB0C(this); }
