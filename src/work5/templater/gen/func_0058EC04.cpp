void ext_58EC04(void*);
struct A_58EC04 { virtual void a(); char pad[0x34]; };
struct B_58EC04 { virtual void b(); };
struct C_58EC04 : A_58EC04, B_58EC04 { virtual void b(); };
void C_58EC04::b() { ext_58EC04(this); }
