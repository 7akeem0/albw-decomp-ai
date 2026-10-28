void func_004B9AA0(void*);
struct A_58EE88 { virtual void a(); char pad[0x34]; };
struct B_58EE88 { virtual void b(); };
struct C_58EE88 : A_58EE88, B_58EE88 { virtual void b(); };
void C_58EE88::b() { func_004B9AA0(this); }
