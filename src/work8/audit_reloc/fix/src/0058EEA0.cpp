void func_004B9AA0(void*);
struct A_58EEA0 { virtual void a(); char pad[0x34]; };
struct B_58EEA0 { virtual void b(); };
struct C_58EEA0 : A_58EEA0, B_58EEA0 { virtual void b(); };
void C_58EEA0::b() { func_004B9AA0(this); }
