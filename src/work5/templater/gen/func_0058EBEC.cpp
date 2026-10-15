void ext_58EBEC(void*);
struct A_58EBEC { virtual void a(); char pad[0x34]; };
struct B_58EBEC { virtual void b(); };
struct C_58EBEC : A_58EBEC, B_58EBEC { virtual void b(); };
void C_58EBEC::b() { ext_58EBEC(this); }
