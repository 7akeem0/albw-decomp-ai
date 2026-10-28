void func_004B9AA0(void*);
struct A_58EC7C { virtual void a(); char pad[0x34]; };
struct B_58EC7C { virtual void b(); };
struct C_58EC7C : A_58EC7C, B_58EC7C { virtual void b(); };
void C_58EC7C::b() { func_004B9AA0(this); }
