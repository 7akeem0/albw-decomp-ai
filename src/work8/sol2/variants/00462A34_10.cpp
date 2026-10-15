
extern "C" void func_0012C718(void*);
struct Cls {
    char pad0[0xd];
    signed char m0d;
    signed char m0e;
    char pad1[0x84 - 0xf];
    float m84;
    float m88;
    float m8c;
    void f();
};
 bool four(const int& b){return b==4;}
void Cls::f() {
    signed char a = m0d;
    signed char b = m0e;
    if (a == 4) {
        if (b == 4) return;
    } else if (a == 0) {
        if (b == 0) return;
    }
    if (four(b)) return;
    m0d = 3;
    m0e = 3;
    func_0012C718(this);
    m84 = -1.0f;
    m88 = -1.0f;
    m8c = -1.0f;
}
