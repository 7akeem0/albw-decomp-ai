typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Sub5AC {
    void reset();
    u8 m0, m1, m2, m3;
    struct V2 { f32 x, y; V2(f32 a, f32 b) : x(a), y(b) {} V2() {} } m4, mC;
    u32 m14;
};

void Sub5AC::reset() {
    m0 = 0;
    m1 = 0;
    m2 = 0;
    m4 = V2(1.0f, 0.0f);
    mC = V2(0.0f, 1.0f);
    m14 = 0;
    m3 = 0;
}
