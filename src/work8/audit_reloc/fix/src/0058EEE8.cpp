void func_004B9AA0(void*);
struct A_58EEE8 { virtual void a(); char pad[0x34]; };
struct B_58EEE8 { virtual void b(); };
struct C_58EEE8 : A_58EEE8, B_58EEE8 { virtual void b(); };
void C_58EEE8::b() { func_004B9AA0(this); }
