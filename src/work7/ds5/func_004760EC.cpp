// 0x4760EC
extern "C" void func_00231448(void*);
extern "C" void func_00231524(void*);
extern "C" void func_002317C0(void*, float);
struct Cls {
    char pad1[0xb4];
    unsigned char mB4;
    void f();
};
void Cls::f() {
    mB4 = 0;
    func_00231448((char*)this + 0x38);
    func_00231448((char*)this + 0x44);
    func_00231448((char*)this + 0x50);
    func_00231448((char*)this + 0x2c);
    func_00231524((char*)this + 0x20);
    func_002317C0((char*)this + 0x68, 1.0f);
}
