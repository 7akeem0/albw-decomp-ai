void func_004B9AA0(void*);
struct A_58ED60 { virtual void a(); char pad[0x34]; };
struct B_58ED60 { virtual void b(); };
struct C_58ED60 : A_58ED60, B_58ED60 { virtual void b(); };
void C_58ED60::b() { func_004B9AA0(this); }
