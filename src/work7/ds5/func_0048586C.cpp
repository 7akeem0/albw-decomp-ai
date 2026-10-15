// 0x48586C
extern "C" void func_00231448(void*);

struct Cls {
    char pad[0xb4];
    unsigned char mB4;
    void f();
};
void Cls::f() {
    func_00231448((char*)this + 0x74);
    mB4 = 0;
}
