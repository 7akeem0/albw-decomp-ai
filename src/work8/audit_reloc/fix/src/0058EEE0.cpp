void func_004B9AA0(void*);
struct A_58EEE0 { virtual void a(); char pad[0x34]; };
struct B_58EEE0 { virtual void b(); };
struct C_58EEE0 : A_58EEE0, B_58EEE0 { virtual void b(); };
void C_58EEE0::b() { func_004B9AA0(this); }
