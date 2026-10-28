void func_004B9AA0(void*);
struct A_58EC84 { virtual void a(); char pad[0x34]; };
struct B_58EC84 { virtual void b(); };
struct C_58EC84 : A_58EC84, B_58EC84 { virtual void b(); };
void C_58EC84::b() { func_004B9AA0(this); }
