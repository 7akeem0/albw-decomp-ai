void func_0030D010(void*);
struct A_58E490 { virtual void a(); char pad[0x8]; };
struct B_58E490 { virtual void b(); };
struct C_58E490 : A_58E490, B_58E490 { virtual void b(); };
void C_58E490::b() { func_0030D010(this); }
