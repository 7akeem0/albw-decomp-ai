void ext_58EBBC(void*);
struct A_58EBBC { virtual void a(); char pad[0x34]; };
struct B_58EBBC { virtual void b(); };
struct C_58EBBC : A_58EBBC, B_58EBBC { virtual void b(); };
void C_58EBBC::b() { ext_58EBBC(this); }
