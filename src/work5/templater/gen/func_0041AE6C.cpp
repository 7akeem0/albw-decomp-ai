void ext_41AE6C(void*);
struct A_41AE6C { virtual void a(); char pad[0x40]; };
struct B_41AE6C { virtual void b(); };
struct C_41AE6C : A_41AE6C, B_41AE6C { virtual void b(); };
void C_41AE6C::b() { ext_41AE6C(this); }
