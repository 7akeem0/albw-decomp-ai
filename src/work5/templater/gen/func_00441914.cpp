void ext_441914(void*);
struct A_441914 { virtual void a(); char pad[0x34]; };
struct B_441914 { virtual void b(); };
struct C_441914 : A_441914, B_441914 { virtual void b(); };
void C_441914::b() { ext_441914(this); }
