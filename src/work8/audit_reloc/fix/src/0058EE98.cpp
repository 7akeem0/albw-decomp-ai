void func_004B9AA0(void*);
struct A_58EE98 { virtual void a(); char pad[0x34]; };
struct B_58EE98 { virtual void b(); };
struct C_58EE98 : A_58EE98, B_58EE98 { virtual void b(); };
void C_58EE98::b() { func_004B9AA0(this); }
