void func_004B9AA0(void*);
struct A_58EED0 { virtual void a(); char pad[0x34]; };
struct B_58EED0 { virtual void b(); };
struct C_58EED0 : A_58EED0, B_58EED0 { virtual void b(); };
void C_58EED0::b() { func_004B9AA0(this); }
