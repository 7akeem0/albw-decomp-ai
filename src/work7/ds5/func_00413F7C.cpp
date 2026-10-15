// 0x413F7C
struct Cls {
    char pad[0x20];
    unsigned short m20;
    char pad2[0x44 - 0x22];
    float m44;
    void f(float a);
};
void Cls::f(float a) {
    float v = a + 1.0f;
    if (v < 0.0f) v = 0.0f;
    if (m44 == v) return;
    m44 = v;
    m20 |= 8;
}
