// 0x3FDFF4
extern "C" void* func_0041F33C(void*, void*);
extern "C" void* func_00404478(void*, int);
extern "C" void func_00420574(void*, void*, void*, void*);
struct Cls {
    char pad[0x2c];
    unsigned char m2C;
    int f(int a, int b);
};
int Cls::f(int a, int b) {
    if (m2C != 0) return m2C;
    void* t = func_0041F33C((void*)a, (void*)b);
    void* u = func_00404478(t, 4);
    func_00420574(this, u, (void*)a, (void*)b);
    m2C = 1;
    return 1;
}
