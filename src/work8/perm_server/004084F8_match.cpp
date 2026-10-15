
extern "C" void* func_00412BB4(void*);
extern "C" void* func_004129E0(void*, int, int);
extern "C" void* func_00412F58(void*);
struct Mgr { char pad[2]; unsigned char m2; };
extern Mgr data_00714CB4;
struct Cls {
    char pad1[0xc];
    int mC;
    char pad2[0x18 - 0x10];
    int m18;
    void f(int a);
};
void Cls::f(int a) {
    if (data_00714CB4.m2 != 0) return;
    int t = mC + a;
    int a_c80 = a;
    void* s = func_00412BB4((void*)mC);
    void* u = func_004129E0(s, a_c80, mC);
    void* v = func_00412F58(u);
    func_004129E0(v, t, m18);
    data_00714CB4.m2 = 1;
}
