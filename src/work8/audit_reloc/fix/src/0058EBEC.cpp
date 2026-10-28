void func_004B9AA0(void*);
struct A_58EBEC { virtual void a(); char pad[0x34]; };
struct B_58EBEC { virtual void b(); };
struct C_58EBEC : A_58EBEC, B_58EBEC { virtual void b(); };
void C_58EBEC::b() { func_004B9AA0(this); }
