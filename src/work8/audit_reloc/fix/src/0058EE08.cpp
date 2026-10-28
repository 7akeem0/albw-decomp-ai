void func_004B9AA0(void*);
struct A_58EE08 { virtual void a(); char pad[0x34]; };
struct B_58EE08 { virtual void b(); };
struct C_58EE08 : A_58EE08, B_58EE08 { virtual void b(); };
void C_58EE08::b() { func_004B9AA0(this); }
