void func_004B9AA0(void*);
struct A_58EB3C { virtual void a(); char pad[0x34]; };
struct B_58EB3C { virtual void b(); };
struct C_58EB3C : A_58EB3C, B_58EB3C { virtual void b(); };
void C_58EB3C::b() { func_004B9AA0(this); }
