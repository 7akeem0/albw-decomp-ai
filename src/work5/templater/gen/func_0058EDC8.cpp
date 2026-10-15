void ext_58EDC8(void*);
struct A_58EDC8 { virtual void a(); char pad[0x34]; };
struct B_58EDC8 { virtual void b(); };
struct C_58EDC8 : A_58EDC8, B_58EDC8 { virtual void b(); };
void C_58EDC8::b() { ext_58EDC8(this); }
