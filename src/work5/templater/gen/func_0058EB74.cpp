void ext_58EB74(void*);
struct A_58EB74 { virtual void a(); char pad[0x34]; };
struct B_58EB74 { virtual void b(); };
struct C_58EB74 : A_58EB74, B_58EB74 { virtual void b(); };
void C_58EB74::b() { ext_58EB74(this); }
