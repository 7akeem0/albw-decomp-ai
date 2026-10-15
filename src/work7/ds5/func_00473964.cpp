// 0x473964
extern "C" void func_004B964C(void*);
extern "C" void func_0012C718(void*);
struct Sub { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls {
    char pad1[0xa0];
    Sub* mA0;
    char pad2[0xac - 0xa4];
    unsigned char mAC;
    unsigned char mAD;
    void f();
};
void Cls::f() {
    Sub* p = mA0;
    if (p->mD == 0 && p->mE == 0) {
        func_004B964C(this);
        if (mAD == 1) { mAC = 1; return; }
        func_0012C718(this);
    }
}
