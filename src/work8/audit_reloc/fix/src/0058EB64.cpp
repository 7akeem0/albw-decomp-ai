void func_004B9AA0(void*);
struct A_58EB64 { virtual void a(); char pad[0x34]; };
struct B_58EB64 { virtual void b(); };
struct C_58EB64 : A_58EB64, B_58EB64 { virtual void b(); };
void C_58EB64::b() { func_004B9AA0(this); }
