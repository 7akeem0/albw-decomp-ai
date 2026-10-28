void func_004B9AA0(void*);
struct A_58EC6C { virtual void a(); char pad[0x34]; };
struct B_58EC6C { virtual void b(); };
struct C_58EC6C : A_58EC6C, B_58EC6C { virtual void b(); };
void C_58EC6C::b() { func_004B9AA0(this); }
