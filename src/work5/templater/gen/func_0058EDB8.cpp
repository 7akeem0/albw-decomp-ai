void ext_58EDB8(void*);
struct A_58EDB8 { virtual void a(); char pad[0x34]; };
struct B_58EDB8 { virtual void b(); };
struct C_58EDB8 : A_58EDB8, B_58EDB8 { virtual void b(); };
void C_58EDB8::b() { ext_58EDB8(this); }
