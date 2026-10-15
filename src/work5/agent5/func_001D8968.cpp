typedef unsigned int u32;
void func_0034C8F0(void* a, void* b, int c);
struct Obj {
    char pad0[0x3a0];
    void* m3a0;
    char pad3a4[0x43c - 0x3a4];
    void* m43c;
    int f(int a);
};
int Obj::f(int a) {
    func_0034C8F0(m43c, m3a0, a);
    return 0;
}
