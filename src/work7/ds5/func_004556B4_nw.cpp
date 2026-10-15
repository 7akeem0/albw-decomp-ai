// 0x4556B4
extern "C" void func_0066D2AC(void*, int) ;
struct Sub { char pad[0x15c]; unsigned char m15C; };
struct Cls {
    char pad1[0x18];
    int m18;
    char pad2[0x68 - 0x1c];
    int m68;
    char pad3[0xbc - 0x6c];
    Sub* mBC;
    void f();
};
void Cls::f() {
    if (m68 == 0xd) {
        if (mBC->m15C != 2) {
            m18 &= ~4;
            func_0066D2AC((char*)this + 0x68, 2);
        }
    }
    if (m68 == 9) {
        if (mBC->m15C == 2) {
            m18 &= ~4;
            func_0066D2AC((char*)this + 0x68, 3);
        }
    }
}
