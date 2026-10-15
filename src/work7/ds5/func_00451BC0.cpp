// 0x451BC0
extern "C" void func_00232468(void*);
extern "C" void func_002317C0(void*, float);
extern "C" void func_002313DC(void*);
struct Obj {
    char pad[0xd];
    unsigned char mD;
    unsigned char mE;
};
struct Cls {
    char pad1[0x44];
    Obj* m44;
    int m48;
    void f();
};
void Cls::f() {
    func_00232468(this);
    func_002317C0((char*)this + 0x38, 1.0f);
    if (m44 != 0 && m44->mD == 0 && m44->mE == 0) {
        m44->mE = 1;
        func_002313DC((char*)m44 + 0x44);
    }
    m48 = 0;
}
