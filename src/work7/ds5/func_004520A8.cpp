// 0x4520A8
extern "C" void func_001B6C04(void*);
extern "C" void func_0066D024(void*, int);
extern "C" void func_004B948C(void*, void*);
struct Node { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls {
    char pad0[0x74];
    char m74;
    char pad1[0x1d8 - 0x75];
    void* m1D8;
    char pad2[0x260 - 0x1dc];
    Node* m260;
    Node* m264;
    char pad3[0x280 - 0x268];
    unsigned char m280;
    void f();
};
void Cls::f() {
    func_001B6C04(this);
    func_0066D024((char*)this + 0x74, 0);
    Node* a = m260;
    if (a->mD == 0 && a->mE == 0) a->mE = 1;
    func_004B948C(this, m260);
    Node* b = m264;
    if (b->mD == 0 && b->mE == 0) b->mE = 1;
    func_004B948C(this, m264);
    m280 = 0;
    *(short*)m1D8 = 0;
}
