// 0x41AA90
extern "C" void* func_0040F2E4(void*);
extern "C" void func_0040F3F4(void*, void*);
extern "C" void func_004149E4(void*);
extern "C" void* func_00414FF0();
extern "C" void func_00111EE4(void*, void*);
struct Cls {
    char pad0[0xd];
    unsigned char mD;
    char pad1[0x44 - 0xe];
    char m44;
    char pad2[0x60 - 0x45];
    void* m60;
    char pad3[0xfc - 0x64];
    unsigned int mFC;
    void f();
};
void Cls::f() {
    void* s = *(void**)((char*)this + 0x60);
    func_0040F3F4(func_0040F2E4(this), s);
    for (unsigned int i = 0; i < mFC; i++) {
        void* p = *(void**)((char*)this + i * 0x340 + 0x134);
        if (p) func_004149E4(p);
    }
    if (mD != 0) {
        void* r = func_00414FF0();
        func_00111EE4(r, (char*)this + 0x44);
        mD = 0;
    }
}
