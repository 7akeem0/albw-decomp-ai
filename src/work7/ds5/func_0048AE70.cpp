// 0x48AE70
extern "C" void func_006003D8(int, void*);
extern "C" int func_00561EB4(void*, int, int);
extern "C" void func_00601378(int);
struct Cls {
    char pad[0x54];
    unsigned char m54;
    void f(unsigned char a1);
};
void Cls::f(unsigned char a1) {
    int x;
    func_006003D8(0x208, &x);
    int v = x;
    m54 = a1;
    int r = func_00561EB4((char*)this + 0x54, v, 1);
    x = r;
    func_00601378((r - v) & ~3);
}
