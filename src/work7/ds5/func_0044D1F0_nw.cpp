// 0x44D1F0
extern "C" void func_0066CD9C(void*, int) ;
struct Cls { char pad[0xb4]; unsigned char mB4; void f(); };
void Cls::f() {
    if (!mB4) return;
    func_0066CD9C((char*)this + 0xb0, 0);
}
