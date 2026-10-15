void ext_4B9A98(void*);
struct A_4B9A98 { virtual void a(); char pad[0x34]; };
struct B_4B9A98 { virtual void b(); };
struct C_4B9A98 : A_4B9A98, B_4B9A98 { virtual void b(); };
void C_4B9A98::b() { ext_4B9A98(this); }
