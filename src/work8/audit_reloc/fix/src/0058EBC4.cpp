void func_004B9AA0(void*);
struct A_58EBC4 { virtual void a(); char pad[0x34]; };
struct B_58EBC4 { virtual void b(); };
struct C_58EBC4 : A_58EBC4, B_58EBC4 { virtual void b(); };
void C_58EBC4::b() { func_004B9AA0(this); }
