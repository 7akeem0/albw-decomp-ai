// 0x44E480
extern "C" void func_001B6DE0(void*);
extern "C" void  func_0066CD9C(void*, int);
extern "C" void func_00446980(void*, void*, unsigned char);
struct V2 { float x, y; };
struct Cls {
    char pad0[0xb0];
    char mB0;
    char pad1[0xb4 - 0xb1];
    signed char mB4;
    char pad2[0xe0 - 0xb5];
    V2 mA;
    float mE8;
    char pad3[0xfc - 0xec];
    V2 mB;
    float m104;
    unsigned char m108;
    char pad4[0x12c - 0x109];
    void* m12C;
    void f();
};
void Cls::f() {
    func_001B6DE0(this);
    signed char v = mB4;
    if (v == 0) return;
    if (v == 9 || v == 5 || v == 6 || v == 7 || v == 8) {
        if (m12C != 0) {
            func_00446980(m12C, &mE8, m108);
            V2* d = &mB;
            *d = mA;
            m104 = 8.0f;
        }
    }
    func_0066CD9C(&mB0, 0);
}
