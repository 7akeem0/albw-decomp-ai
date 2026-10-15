void ext_58EB04(void*);
struct A_58EB04 { virtual void a(); char pad[0x34]; };
struct B_58EB04 { virtual void b(); };
struct C_58EB04 : A_58EB04, B_58EB04 { virtual void b(); };
void C_58EB04::b() { ext_58EB04(this); }
