void func_004B9AA0(void*);
struct A_58EB1C { virtual void a(); char pad[0x34]; };
struct B_58EB1C { virtual void b(); };
struct C_58EB1C : A_58EB1C, B_58EB1C { virtual void b(); };
void C_58EB1C::b() { func_004B9AA0(this); }
