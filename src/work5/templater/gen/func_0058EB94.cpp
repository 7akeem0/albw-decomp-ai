void ext_58EB94(void*);
struct A_58EB94 { virtual void a(); char pad[0x34]; };
struct B_58EB94 { virtual void b(); };
struct C_58EB94 : A_58EB94, B_58EB94 { virtual void b(); };
void C_58EB94::b() { ext_58EB94(this); }
