// 0x4744C4
extern "C" void func_00474510(void*);
struct Cls {
    char pad1[0xd];
    unsigned char mD;
    unsigned char mE;
    char pad2[0x8c - 0xf];
    unsigned char m8C;
    char pad3[0x94 - 0x8d];
    unsigned char m94;
    void f();
};
void Cls::f() {
    if (mD != 0 || mE != 0) {
        if (m8C != 0 && m94 != 0) {
            void** vt = *(void***)this;
            ((void(*)(void*))vt[19])(this);
        }
    }
    func_00474510(this);
}
