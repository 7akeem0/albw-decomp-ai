void func_004B9AA0(void*);
struct A_58EBAC { virtual void a(); char pad[0x34]; };
struct B_58EBAC { virtual void b(); };
struct C_58EBAC : A_58EBAC, B_58EBAC { virtual void b(); };
void C_58EBAC::b() { func_004B9AA0(this); }
