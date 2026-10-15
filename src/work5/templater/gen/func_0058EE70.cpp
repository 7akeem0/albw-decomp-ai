void ext_58EE70(void*);
struct A_58EE70 { virtual void a(); char pad[0x34]; };
struct B_58EE70 { virtual void b(); };
struct C_58EE70 : A_58EE70, B_58EE70 { virtual void b(); };
void C_58EE70::b() { ext_58EE70(this); }
