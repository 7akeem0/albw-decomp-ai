// 0x413788  (near-miss: orig has an extra mov r1,#1; mine is 68B vs 72B)
extern int ro_006F0710;
extern "C" void func_00104164(void*, unsigned int);
extern "C" void func_001080D4(void*);
struct Cls {
    void* m0;
    int m4;
    int m8;
    int mC;
    int m10;
    unsigned char m14;
    char pad[0x18 - 0x15];
    int m18;
    void* f();
};
void* Cls::f() {
    m0 = &ro_006F0710;
    m4 = 0;
    m8 = 0;
    mC = 0;
    m10 = 0;
    func_00104164((char*)this + 0xc, 1u);
    m14 = 0;
    m18 = 0;
    func_001080D4((char*)this + 0xc);
    return this;
}
