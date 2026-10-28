void func_00488ACC(void*);
struct A_58ECCC { virtual void a(); char pad[0x34]; };
struct B_58ECCC { virtual void b(); };
struct C_58ECCC : A_58ECCC, B_58ECCC { virtual void b(); };
void C_58ECCC::b() { func_00488ACC(this); }
