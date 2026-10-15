// 0x48AE70
extern "C" void func_006003D8(int, void*);
extern "C" int f562488(void*, int, int);
extern "C" void func_00601378(int);
extern "C" int f562488(void*, int, int);
struct Cls {
    char pad[0xa8];
    unsigned char mPad;
    unsigned char mOff;
    void f(unsigned char a1);
};
void Cls::f(unsigned char a1) {
    int x;
    func_006003D8(0x208, &x);
    int v = x;
    mOff = a1;
    int r = f562488((char*)this + 0xa8, v, 1);
    x = r;
    func_00601378((r - v) & ~3);
}
