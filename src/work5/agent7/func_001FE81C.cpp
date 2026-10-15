typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
struct ElemC {
    u8 m0;
    u32 m4;
    u16 m8;
    u8 mA;
    ElemC();
};
ElemC::ElemC() : m0(0), m4(0), m8(0), mA(0) {}
