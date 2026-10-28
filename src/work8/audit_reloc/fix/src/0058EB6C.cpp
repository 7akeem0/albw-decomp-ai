void func_004B9AA0(void*);
struct A_58EB6C { virtual void a(); char pad[0x34]; };
struct B_58EB6C { virtual void b(); };
struct C_58EB6C : A_58EB6C, B_58EB6C { virtual void b(); };
void C_58EB6C::b() { func_004B9AA0(this); }
