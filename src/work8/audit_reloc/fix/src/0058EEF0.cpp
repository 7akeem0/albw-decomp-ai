void func_004B9AA0(void*);
struct A_58EEF0 { virtual void a(); char pad[0x34]; };
struct B_58EEF0 { virtual void b(); };
struct C_58EEF0 : A_58EEF0, B_58EEF0 { virtual void b(); };
void C_58EEF0::b() { func_004B9AA0(this); }
