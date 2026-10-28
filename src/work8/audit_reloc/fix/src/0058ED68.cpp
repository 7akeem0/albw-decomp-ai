void func_004B9AA0(void*);
struct A_58ED68 { virtual void a(); char pad[0x34]; };
struct B_58ED68 { virtual void b(); };
struct C_58ED68 : A_58ED68, B_58ED68 { virtual void b(); };
void C_58ED68::b() { func_004B9AA0(this); }
