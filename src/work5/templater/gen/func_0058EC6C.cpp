void ext_58EC6C(void*);
struct A_58EC6C { virtual void a(); char pad[0x34]; };
struct B_58EC6C { virtual void b(); };
struct C_58EC6C : A_58EC6C, B_58EC6C { virtual void b(); };
void C_58EC6C::b() { ext_58EC6C(this); }
