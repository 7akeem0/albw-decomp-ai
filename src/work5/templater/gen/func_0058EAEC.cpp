void ext_58EAEC(void*);
struct A_58EAEC { virtual void a(); char pad[0x34]; };
struct B_58EAEC { virtual void b(); };
struct C_58EAEC : A_58EAEC, B_58EAEC { virtual void b(); };
void C_58EAEC::b() { ext_58EAEC(this); }
