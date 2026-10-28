void func_0044191C(void*);
struct A_58EB0C { virtual void a(); char pad[0x34]; };
struct B_58EB0C { virtual void b(); };
struct C_58EB0C : A_58EB0C, B_58EB0C { virtual void b(); };
void C_58EB0C::b() { func_0044191C(this); }
