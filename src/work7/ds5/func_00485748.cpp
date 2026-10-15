// 0x485748
extern "C" int func_004B083C();
struct Cls {
    void* m0;
    char pad1[0xd - 4];
    unsigned char mD;
    unsigned char mE;
    void f();
};
void Cls::f() {
    if (func_004B083C() != 0) {
        if (mD != 3 || mE != 3) mE = 3;
    } else {
        if (!(mD == 0 && mE == 0)) {
            void** vt = *(void***)this;
            ((void(*)(void*))vt[13])(this);
            mE = 0;
            mD = 0;
        }
    }
}
