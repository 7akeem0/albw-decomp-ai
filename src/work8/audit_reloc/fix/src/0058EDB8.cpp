void func_004B9AA0(void*);
struct A_58EDB8 { virtual void a(); char pad[0x34]; };
struct B_58EDB8 { virtual void b(); };
struct C_58EDB8 : A_58EDB8, B_58EDB8 { virtual void b(); };
void C_58EDB8::b() { func_004B9AA0(this); }
