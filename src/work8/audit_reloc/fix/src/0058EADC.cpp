void func_004B9AA0(void*);
struct A_58EADC { virtual void a(); char pad[0x34]; };
struct B_58EADC { virtual void b(); };
struct C_58EADC : A_58EADC, B_58EADC { virtual void b(); };
void C_58EADC::b() { func_004B9AA0(this); }
