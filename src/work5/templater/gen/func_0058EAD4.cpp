void ext_58EAD4(void*);
struct A_58EAD4 { virtual void a(); char pad[0x34]; };
struct B_58EAD4 { virtual void b(); };
struct C_58EAD4 : A_58EAD4, B_58EAD4 { virtual void b(); };
void C_58EAD4::b() { ext_58EAD4(this); }
