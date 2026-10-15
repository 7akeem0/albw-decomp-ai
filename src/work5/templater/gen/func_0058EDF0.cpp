void ext_58EDF0(void*);
struct A_58EDF0 { virtual void a(); char pad[0x34]; };
struct B_58EDF0 { virtual void b(); };
struct C_58EDF0 : A_58EDF0, B_58EDF0 { virtual void b(); };
void C_58EDF0::b() { ext_58EDF0(this); }
