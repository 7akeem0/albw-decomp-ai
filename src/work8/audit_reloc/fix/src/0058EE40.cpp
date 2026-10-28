void func_00488ACC(void*);
struct A_58EE40 { virtual void a(); char pad[0x34]; };
struct B_58EE40 { virtual void b(); };
struct C_58EE40 : A_58EE40, B_58EE40 { virtual void b(); };
void C_58EE40::b() { func_00488ACC(this); }
