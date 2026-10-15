void ext_58EBA4(void*);
struct A_58EBA4 { virtual void a(); char pad[0x34]; };
struct B_58EBA4 { virtual void b(); };
struct C_58EBA4 : A_58EBA4, B_58EBA4 { virtual void b(); };
void C_58EBA4::b() { ext_58EBA4(this); }
