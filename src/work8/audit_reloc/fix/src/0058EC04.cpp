void func_004B9AA0(void*);
struct A_58EC04 { virtual void a(); char pad[0x34]; };
struct B_58EC04 { virtual void b(); };
struct C_58EC04 : A_58EC04, B_58EC04 { virtual void b(); };
void C_58EC04::b() { func_004B9AA0(this); }
