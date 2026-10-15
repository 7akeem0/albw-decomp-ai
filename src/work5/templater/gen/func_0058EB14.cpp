void ext_58EB14(void*);
struct A_58EB14 { virtual void a(); char pad[0x34]; };
struct B_58EB14 { virtual void b(); };
struct C_58EB14 : A_58EB14, B_58EB14 { virtual void b(); };
void C_58EB14::b() { ext_58EB14(this); }
