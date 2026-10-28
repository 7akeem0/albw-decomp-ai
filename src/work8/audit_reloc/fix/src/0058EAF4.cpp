void func_0044191C(void*);
struct A_58EAF4 { virtual void a(); char pad[0x34]; };
struct B_58EAF4 { virtual void b(); };
struct C_58EAF4 : A_58EAF4, B_58EAF4 { virtual void b(); };
void C_58EAF4::b() { func_0044191C(this); }
