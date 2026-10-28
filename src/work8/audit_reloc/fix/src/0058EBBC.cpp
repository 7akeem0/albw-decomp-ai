void func_0044191C(void*);
struct A_58EBBC { virtual void a(); char pad[0x34]; };
struct B_58EBBC { virtual void b(); };
struct C_58EBBC : A_58EBBC, B_58EBBC { virtual void b(); };
void C_58EBBC::b() { func_0044191C(this); }
