// 0x412814
extern "C" void* func_004128D8(void*);
struct Obj {
    char pad0[0x50];
    unsigned int m50;
    char pad1[0x99 - 0x54];
    unsigned char m99;
};
struct Cls {
    int m0;
    char pad[8];
    int mC;
    bool f(int arg);
};
bool Cls::f(int arg) {
    if (mC == 0) return false;
    if (mC > m0) return true;
    Obj* p = (Obj*)func_004128D8(this);
    if (p == 0) return false;
    int v = (int)__usat(p->m99 + p->m50, 7);
    if (v > arg) return false;
    return true;
}
