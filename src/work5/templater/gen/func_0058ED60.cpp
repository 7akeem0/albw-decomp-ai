void ext_58ED60(void*);
struct A_58ED60 { virtual void a(); char pad[0x34]; };
struct B_58ED60 { virtual void b(); };
struct C_58ED60 : A_58ED60, B_58ED60 { virtual void b(); };
void C_58ED60::b() { ext_58ED60(this); }
