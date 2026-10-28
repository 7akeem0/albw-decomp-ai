void func_004B9AA0(void*);
struct A_58ECAC { virtual void a(); char pad[0x34]; };
struct B_58ECAC { virtual void b(); };
struct C_58ECAC : A_58ECAC, B_58ECAC { virtual void b(); };
void C_58ECAC::b() { func_004B9AA0(this); }
