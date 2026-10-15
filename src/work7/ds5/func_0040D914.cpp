// 0x40D914 -- clamp x to >= 0 into mc4.
struct Cls {
    char pad[0xc4];
    float mc4;
    void f(float x);
};
void Cls::f(float x) {
    float z = 0.0f;
    mc4 = x < z ? z : x;
}
