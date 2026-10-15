void ext_58EE38(void*);
struct A_58EE38 { virtual void a(); char pad[0x34]; };
struct B_58EE38 { virtual void b(); };
struct C_58EE38 : A_58EE38, B_58EE38 { virtual void b(); };
void C_58EE38::b() { ext_58EE38(this); }
