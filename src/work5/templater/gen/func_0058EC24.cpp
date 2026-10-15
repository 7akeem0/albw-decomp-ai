void ext_58EC24(void*);
struct A_58EC24 { virtual void a(); char pad[0x34]; };
struct B_58EC24 { virtual void b(); };
struct C_58EC24 : A_58EC24, B_58EC24 { virtual void b(); };
void C_58EC24::b() { ext_58EC24(this); }
