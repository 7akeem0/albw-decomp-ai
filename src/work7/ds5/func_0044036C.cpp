// 0x44036C
extern "C" void func_002317C0(void*, float);

struct Cls {
    char pad[0x177];
    unsigned char m177;
    void f();
};
void Cls::f() {
    unsigned char& r = m177;
    r |= 4;
    func_002317C0((char*)this + 0x110, 1.0f);
}
