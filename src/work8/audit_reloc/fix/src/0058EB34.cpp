void func_004B9AA0(void*);
struct A_58EB34 { virtual void a(); char pad[0x34]; };
struct B_58EB34 { virtual void b(); };
struct C_58EB34 : A_58EB34, B_58EB34 { virtual void b(); };
void C_58EB34::b() { func_004B9AA0(this); }
