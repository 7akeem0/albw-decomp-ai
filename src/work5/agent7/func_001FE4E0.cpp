typedef unsigned int u32;
typedef unsigned char u8;
typedef float f32;
struct Elem9C {
    u8 pad0[0x6c];
    f32 m6c, m70, m74, m78, m7c;
    u8 pad80[0x10];
    bool m90;
    bool m91;
    bool m92;
    Elem9C();
};
Elem9C::Elem9C() : m6c(0.0f), m70(0.0f), m74(0.0f), m78(0.0f), m7c(0.0f), m90(true), m91(false), m92(false) {}
