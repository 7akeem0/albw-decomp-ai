// 0x476BA8
extern "C" void func_0066E7A0(void*, int) ;
struct Sub { char pad[0x3c]; signed char m3C; };
struct Cls {
    char pad1[0xcc];
    char mCC;
    char pad2[0xd0 - 0xcd];
    unsigned char mD0;
    char pad3[0xf0 - 0xd1];
    char mF0;
    char pad4[0x1f4 - 0xf1];
    Sub* m1F4;
    Sub* m1F8;
    void f();
};
void Cls::f() {
    if (mD0 == 2) {
        func_0066E7A0((char*)this + 0xf0, 0xb);
        return;
    }
    if ((unsigned)(m1F4->m3C - 1) < 5 || (unsigned)(m1F8->m3C - 1) < 5) {
        func_0066E7A0((char*)this + 0xf0, 0xb);
        func_0066E7A0((char*)this + 0xcc, 2);
    }
}
