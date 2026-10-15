// 0x41BDF4
struct Cls {
    char pad[0xc];
    unsigned char m0c;
    char pad2[0x6c - 0xd];
    int m6c;
    float m70;
    void f(int a1, int a2);
};
void Cls::f(int a1, int a2) {
    if (m0c == 0) return;
    if (a1 == 0) {
        m6c += a2;
        return;
    }
    if (a1 != 1) return;
    m70 = m70 + (float)a2;
}
