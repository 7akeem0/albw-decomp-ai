void ext_58ED70(void*);
struct A_58ED70 { virtual void a(); char pad[0x34]; };
struct B_58ED70 { virtual void b(); };
struct C_58ED70 : A_58ED70, B_58ED70 { virtual void b(); };
void C_58ED70::b() { ext_58ED70(this); }
