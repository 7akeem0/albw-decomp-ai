void ext_3427F0(void*);
struct A_3427F0 { virtual void a(); char pad[0xC]; };
struct B_3427F0 { virtual void b(); };
struct C_3427F0 : A_3427F0, B_3427F0 { virtual void b(); };
void C_3427F0::b() { ext_3427F0(this); }
