// 0x41CA24
struct Cls {
    char pad[0x164];
    int m164;
    int m168;
    void f(int n);
};
void Cls::f(int n) {
    m164 += n;
    if (m164 > m168) m164 = m168;
}
