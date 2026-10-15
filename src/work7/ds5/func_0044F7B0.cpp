// 0x44F7B0
extern "C" void func_001B6DE0(void*);
struct Cls {
    char pad[0x18];
    unsigned int m18;
    char pad2[0x9a - 0x1c];
    unsigned char m9a;
    void f();
};
void Cls::f() {
    if (!m9a) m18 &= ~0x40;
    func_001B6DE0(this);
}
