void func_004B9AA0(void*);
struct A_58EBCC { virtual void a(); char pad[0x34]; };
struct B_58EBCC { virtual void b(); };
struct C_58EBCC : A_58EBCC, B_58EBCC { virtual void b(); };
void C_58EBCC::b() { func_004B9AA0(this); }
