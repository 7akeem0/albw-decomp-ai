// 0x45E408
extern "C" void func_002317C0(void*, float);

struct Cls {
    char pad[0x134];
    unsigned short m134;
    void f();
};
void Cls::f() {
    m134 = 2;
    func_002317C0((char*)this + 0x134, 1.0f);
}
