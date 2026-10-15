void ext_58EDD0(void*);
struct A_58EDD0 { virtual void a(); char pad[0x34]; };
struct B_58EDD0 { virtual void b(); };
struct C_58EDD0 : A_58EDD0, B_58EDD0 { virtual void b(); };
void C_58EDD0::b() { ext_58EDD0(this); }
