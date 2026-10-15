// 0x405618
extern "C" void func_003FF964(void*);
struct Cls {
    char pad1[0xb4];
    void* mB4;
    char pad2[0xce - 0xb8];
    unsigned short mCE;
    char pad3[0xf4 - 0xd0];
    unsigned char mF4;
    char pad4[0xf8 - 0xf5];
    void* mF8;
    void* mFC;
    void f();
};
void Cls::f() {
    func_003FF964(this);
    if (mCE == 0 || mB4 == 0) return;
    if (mF8 == 0) return;
    if ((mF4 & 4) == 0) return;
    unsigned char* p = (unsigned char*)mFC;
    *(p + 6) = 0;
    mF4 &= ~4;
}
