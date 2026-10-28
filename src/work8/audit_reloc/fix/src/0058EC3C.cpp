void func_004B9AA0(void*);
struct A_58EC3C { virtual void a(); char pad[0x34]; };
struct B_58EC3C { virtual void b(); };
struct C_58EC3C : A_58EC3C, B_58EC3C { virtual void b(); };
void C_58EC3C::b() { func_004B9AA0(this); }
