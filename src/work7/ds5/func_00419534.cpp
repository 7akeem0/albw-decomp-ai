// 0x419534
struct Cls {
    char pad1[0xc];
    unsigned char mC, mD, mE, mF, m10;
    char pad2[0x14 - 0x11];
    float m14, m18, m1C, m20, m24, m28;
    unsigned char m2C;
    unsigned char m2D;
    unsigned char m2E;
    char pad4[0x30 - 0x2f];
    float m30;
    unsigned char m34, m35;
    char pad5[2];
    float m38, m3C;
    int m40;
    void f();
};
void Cls::f() {
    mC = 0;
    mD = 0;
    mE = 0;
    mF = 0;
    m10 = 0;
    m14 = 1.0f;
    m18 = 1.0f;
    m1C = 0.0f;
    m20 = 0.0f;
    m24 = 0.0f;
    m2E = 0;
    m2C = 0xff;
    m28 = 0.0f;
    m30 = 0.0f;
    m34 = 0;
    m35 = 0;
    m38 = 0.0f;
    m3C = 0.0f;
    m40 = 0;
}
