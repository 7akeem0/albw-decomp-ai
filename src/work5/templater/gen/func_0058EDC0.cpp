void ext_58EDC0(void*);
struct A_58EDC0 { virtual void a(); char pad[0x34]; };
struct B_58EDC0 { virtual void b(); };
struct C_58EDC0 : A_58EDC0, B_58EDC0 { virtual void b(); };
void C_58EDC0::b() { ext_58EDC0(this); }
