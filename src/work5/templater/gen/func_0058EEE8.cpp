void ext_58EEE8(void*);
struct A_58EEE8 { virtual void a(); char pad[0x34]; };
struct B_58EEE8 { virtual void b(); };
struct C_58EEE8 : A_58EEE8, B_58EEE8 { virtual void b(); };
void C_58EEE8::b() { ext_58EEE8(this); }
