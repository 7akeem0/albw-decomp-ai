void ext_488AC4(void*);
struct A_488AC4 { virtual void a(); char pad[0x34]; };
struct B_488AC4 { virtual void b(); };
struct C_488AC4 : A_488AC4, B_488AC4 { virtual void b(); };
void C_488AC4::b() { ext_488AC4(this); }
