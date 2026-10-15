void ext_41BF80(void*);
struct A_41BF80 { virtual void a(); char pad[0x4C]; };
struct B_41BF80 { virtual void b(); };
struct C_41BF80 : A_41BF80, B_41BF80 { virtual void b(); };
void C_41BF80::b() { ext_41BF80(this); }
