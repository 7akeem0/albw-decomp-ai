void func_004B9AA0(void*);
struct A_58EDF8 { virtual void a(); char pad[0x34]; };
struct B_58EDF8 { virtual void b(); };
struct C_58EDF8 : A_58EDF8, B_58EDF8 { virtual void b(); };
void C_58EDF8::b() { func_004B9AA0(this); }
