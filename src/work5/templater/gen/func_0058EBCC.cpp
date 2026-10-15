void ext_58EBCC(void*);
struct A_58EBCC { virtual void a(); char pad[0x34]; };
struct B_58EBCC { virtual void b(); };
struct C_58EBCC : A_58EBCC, B_58EBCC { virtual void b(); };
void C_58EBCC::b() { ext_58EBCC(this); }
