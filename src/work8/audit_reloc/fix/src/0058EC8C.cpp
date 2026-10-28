void func_004B9AA0(void*);
struct A_58EC8C { virtual void a(); char pad[0x34]; };
struct B_58EC8C { virtual void b(); };
struct C_58EC8C : A_58EC8C, B_58EC8C { virtual void b(); };
void C_58EC8C::b() { func_004B9AA0(this); }
