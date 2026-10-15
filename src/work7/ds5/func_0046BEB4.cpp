// 0x46BEB4
extern "C" void func_002317C0(void*, float);
struct Cls {
    char pad[0x74];
    unsigned short m74;
    char pad2[0x80 - 0x76];
    unsigned short m80;
    void f();
};
void Cls::f() {
    float one = 1.0f;
    m74 = 2;
    func_002317C0((char*)this + 0x74, one);
    m80 = 2;
    func_002317C0((char*)this + 0x80, one);
}
