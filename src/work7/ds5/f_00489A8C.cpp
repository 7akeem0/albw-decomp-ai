// 0x489A8C
struct Cls {
    char pad[4];
    float m4;
    float m8;
    float mC;
    unsigned int m10;
    void f(float a, float b);
};
void Cls::f(float a, float b) {
    if (m4 == a) { m10 = 0; return; }
    m8 = a;
    float d = m4 - m8;
    if (d < 0.0f) b = -b;
    mC = b;
    m10 = (unsigned int)(d / b) + 1;
}
