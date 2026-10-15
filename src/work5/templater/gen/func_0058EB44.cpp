void ext_58EB44(void*);
struct A_58EB44 { virtual void a(); char pad[0x34]; };
struct B_58EB44 { virtual void b(); };
struct C_58EB44 : A_58EB44, B_58EB44 { virtual void b(); };
void C_58EB44::b() { ext_58EB44(this); }
