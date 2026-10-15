// 0x438780
extern "C" void func_001B6D40(void*);
extern "C" void func_00231488(void*, float);

struct Cls {
    char pad[0x2c];
    int m2c;
    char pad2[0x74 - 0x30];
    float m74;
    void f();
};

void Cls::f() {
    func_001B6D40(this);
    func_00231488(&m2c, m74);
}
