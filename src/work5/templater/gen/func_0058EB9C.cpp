void ext_58EB9C(void*);
struct A_58EB9C { virtual void a(); char pad[0x34]; };
struct B_58EB9C { virtual void b(); };
struct C_58EB9C : A_58EB9C, B_58EB9C { virtual void b(); };
void C_58EB9C::b() { ext_58EB9C(this); }
