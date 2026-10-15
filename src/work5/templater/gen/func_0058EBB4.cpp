void ext_58EBB4(void*);
struct A_58EBB4 { virtual void a(); char pad[0x34]; };
struct B_58EBB4 { virtual void b(); };
struct C_58EBB4 : A_58EBB4, B_58EBB4 { virtual void b(); };
void C_58EBB4::b() { ext_58EBB4(this); }
