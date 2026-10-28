void func_0044191C(void*);
struct A_58EED8 { virtual void a(); char pad[0x34]; };
struct B_58EED8 { virtual void b(); };
struct C_58EED8 : A_58EED8, B_58EED8 { virtual void b(); };
void C_58EED8::b() { func_0044191C(this); }
