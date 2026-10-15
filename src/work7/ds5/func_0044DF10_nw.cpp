// 0x44DF10
extern "C" void  func_0066CD9C(void*, int);
extern "C" void func_00446980(void*, void*, unsigned char);
struct V2 { float x, y; };
struct Cls {
    char pad0[0xb0];
    char mB0;
    char pad1[0xe0 - 0xb1];
    V2 mA;
    float mE8;
    float mEC;
    char pad2[0xfc - 0xf0];
    V2 mB;
    float m104;
    unsigned char m108;
    char pad3[0x12c - 0x109];
    void* m12C;
    void f();
};
void Cls::f() {
    if (mE8 != mA.x) return;
    if (mEC != mA.y) return;
    if (m12C != 0) {
        func_00446980(m12C, &mE8, m108);
        V2* d = &mB;
        *d = mA;
        m104 = 8.0f;
    }
    func_0066CD9C(&mB0, 0);
}
