void ext_58EC74(void*);
struct A_58EC74 { virtual void a(); char pad[0x34]; };
struct B_58EC74 { virtual void b(); };
struct C_58EC74 : A_58EC74, B_58EC74 { virtual void b(); };
void C_58EC74::b() { ext_58EC74(this); }
