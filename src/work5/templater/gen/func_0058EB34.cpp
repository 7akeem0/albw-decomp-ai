void ext_58EB34(void*);
struct A_58EB34 { virtual void a(); char pad[0x34]; };
struct B_58EB34 { virtual void b(); };
struct C_58EB34 : A_58EB34, B_58EB34 { virtual void b(); };
void C_58EB34::b() { ext_58EB34(this); }
