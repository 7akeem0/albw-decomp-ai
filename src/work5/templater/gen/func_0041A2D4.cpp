void ext_41A2D4(void*);
struct A_41A2D4 { virtual void a(); char pad[0x40]; };
struct B_41A2D4 { virtual void b(); };
struct C_41A2D4 : A_41A2D4, B_41A2D4 { virtual void b(); };
void C_41A2D4::b() { ext_41A2D4(this); }
