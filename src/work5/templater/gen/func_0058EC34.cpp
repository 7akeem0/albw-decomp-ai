void ext_58EC34(void*);
struct A_58EC34 { virtual void a(); char pad[0x34]; };
struct B_58EC34 { virtual void b(); };
struct C_58EC34 : A_58EC34, B_58EC34 { virtual void b(); };
void C_58EC34::b() { ext_58EC34(this); }
