void func_00488ACC(void*);
struct A_58ECD4 { virtual void a(); char pad[0x34]; };
struct B_58ECD4 { virtual void b(); };
struct C_58ECD4 : A_58ECD4, B_58ECD4 { virtual void b(); };
void C_58ECD4::b() { func_00488ACC(this); }
