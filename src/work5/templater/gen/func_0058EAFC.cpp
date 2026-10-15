void ext_58EAFC(void*);
struct A_58EAFC { virtual void a(); char pad[0x34]; };
struct B_58EAFC { virtual void b(); };
struct C_58EAFC : A_58EAFC, B_58EAFC { virtual void b(); };
void C_58EAFC::b() { ext_58EAFC(this); }
