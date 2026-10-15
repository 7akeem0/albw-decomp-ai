void ext_58EEF8(void*);
struct A_58EEF8 { virtual void a(); char pad[0x34]; };
struct B_58EEF8 { virtual void b(); };
struct C_58EEF8 : A_58EEF8, B_58EEF8 { virtual void b(); };
void C_58EEF8::b() { ext_58EEF8(this); }
