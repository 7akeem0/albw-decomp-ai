void ext_30D008(void*);
struct A_30D008 { virtual void a(); char pad[0x8]; };
struct B_30D008 { virtual void b(); };
struct C_30D008 : A_30D008, B_30D008 { virtual void b(); };
void C_30D008::b() { ext_30D008(this); }
