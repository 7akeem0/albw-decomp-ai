// 0x4861DC
extern "C" int func_001B6B38(void*);
extern "C" void func_001B6A48(void*);
extern "C" void func_00486244(void*);
struct Cls {
    char pad1[0xd];
    unsigned char mD;
    unsigned char mE;
    char pad2[0xe1 - 0xf];
    signed char mE1;
    void f(signed char a, int b);
};
void Cls::f(signed char a, int b) {
    mE1 = a;
    if (func_001B6B38(this) != 0) {
        mE = 1;
        func_001B6A48(this);
    }
    if (mD == 0 && mE == 0) {
        func_00486244(this);
        mE = 1;
    } else if (b != 0) {
        func_00486244(this);
    }
}
