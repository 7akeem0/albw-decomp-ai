// 0x4A07E0: virtual member (vtable slot at ro 0x6F7A88), this unused: call 0x49E89C on a global if set
struct M;
extern M* data_007165A0;
extern void func_0049E89C(M*) __attribute__((weak));
struct X { virtual void f(); };
void X::f() { if (data_007165A0) func_0049E89C(data_007165A0); }
