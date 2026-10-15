void ext_419004(void*);
struct A_419004 { virtual void a(); char pad[0x4C]; };
struct B_419004 { virtual void b(); };
struct C_419004 : A_419004, B_419004 { virtual void b(); };
void C_419004::b() { ext_419004(this); }
