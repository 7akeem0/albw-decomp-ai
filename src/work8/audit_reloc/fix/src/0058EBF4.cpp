void func_004B9AA0(void*);
struct A_58EBF4 { virtual void a(); char pad[0x34]; };
struct B_58EBF4 { virtual void b(); };
struct C_58EBF4 : A_58EBF4, B_58EBF4 { virtual void b(); };
void C_58EBF4::b() { func_004B9AA0(this); }
