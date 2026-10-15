// 0x45E2E8
extern "C" void func_0066D78C(void*, int) ;
struct Cls { char pad[0xbc]; unsigned int mBC; void f(); };
void Cls::f() {
    if (mBC < 0xa0u) return;
    func_0066D78C((char*)this + 0xbc, 1);
}
