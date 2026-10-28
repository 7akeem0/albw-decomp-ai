void func_004B9AA0(void*);
struct A_58ED70 { virtual void a(); char pad[0x34]; };
struct B_58ED70 { virtual void b(); };
struct C_58ED70 : A_58ED70, B_58ED70 { virtual void b(); };
void C_58ED70::b() { func_004B9AA0(this); }
