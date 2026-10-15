// 0x444180
extern "C" void func_001B6B38(void*);
extern "C" void func_002317C0(void*, float);
extern "C" void func_004441E8(void*);
struct Cls {
    char pad1[0xd];
    unsigned char mD;
    unsigned char mE;
    char pad2[0x80 - 0xf];
    char m80;
    char pad3[0x94 - 0x81];
    signed char m94;
    unsigned char m95;
    void f(signed char a);
};
void Cls::f(signed char a) {
    func_001B6B38(this);
    if (mD == 0 && mE == 0) {
        m94 = a;
        func_004441E8(this);
        mE = 1;
    } else {
        if (m94 == a) return;
        m94 = a;
        func_002317C0((char*)this + 0x80, 1.0f);
        m95 = 1;
    }
}
