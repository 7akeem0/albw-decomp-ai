void ext_58ED80(void*);
struct A_58ED80 { virtual void a(); char pad[0x34]; };
struct B_58ED80 { virtual void b(); };
struct C_58ED80 : A_58ED80, B_58ED80 { virtual void b(); };
void C_58ED80::b() { ext_58ED80(this); }
