void func_0044191C(void*);
struct A_58EC4C { virtual void a(); char pad[0x34]; };
struct B_58EC4C { virtual void b(); };
struct C_58EC4C : A_58EC4C, B_58EC4C { virtual void b(); };
void C_58EC4C::b() { func_0044191C(this); }
