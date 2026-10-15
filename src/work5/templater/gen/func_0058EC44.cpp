void ext_58EC44(void*);
struct A_58EC44 { virtual void a(); char pad[0x34]; };
struct B_58EC44 { virtual void b(); };
struct C_58EC44 : A_58EC44, B_58EC44 { virtual void b(); };
void C_58EC44::b() { ext_58EC44(this); }
