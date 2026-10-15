// 0x451C20
extern "C" void func_001B6D40(void*);
extern "C" void func_0012C718(void*);
struct Inner { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls {
    char pad[0x44];
    Inner* m44;
    void f();
};
void Cls::f() {
    func_001B6D40(this);
    Inner* p = m44;
    if (!p) return;
    if (p->mD != 3) return;
    if (p->mE != 3) return;
    func_0012C718(p);
}
