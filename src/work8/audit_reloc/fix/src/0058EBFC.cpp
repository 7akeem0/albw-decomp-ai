void func_004B9AA0(void*);
struct A_58EBFC { virtual void a(); char pad[0x34]; };
struct B_58EBFC { virtual void b(); };
struct C_58EBFC : A_58EBFC, B_58EBFC { virtual void b(); };
void C_58EBFC::b() { func_004B9AA0(this); }
