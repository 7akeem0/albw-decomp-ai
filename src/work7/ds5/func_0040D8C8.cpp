// 0x40D8C8
struct Cls {
    char pad[0x6c];
    int m6c;
    int m70;
    char pad2[0x8c - 0x74];
    int m8c;
    int m90;
    char pad3[0xbc - 0x94];
    int mBC;
    int mC0;
    void f();
};
void Cls::f() {
    if (m70 < m6c) m70++;
    if (m90 < m8c) m90++;
    if (mC0 < mBC) mC0++;
}
