// 0x407F88 -- clamp x to >= 0 into m3c.
struct Cls {
    char pad[0x3c];
    float m3c;
    void f(float x);
};
void Cls::f(float x) {
    float z = 0.0f;
    m3c = x < z ? z : x;
}
