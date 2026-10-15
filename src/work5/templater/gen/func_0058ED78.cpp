void ext_58ED78(void*);
struct A_58ED78 { virtual void a(); char pad[0x34]; };
struct B_58ED78 { virtual void b(); };
struct C_58ED78 : A_58ED78, B_58ED78 { virtual void b(); };
void C_58ED78::b() { ext_58ED78(this); }
