// 0x3FDDC0
extern "C" void func_006003B4(int, void**);
struct Cls { unsigned int m0; void f(); };
void Cls::f() {
    unsigned int p = m0;
    if (p == 0) return;
    void* fp = 0;
    func_006003B4(0, &fp);
    if (fp == 0) return;
    unsigned a1 = p & ~3u;
    ((void(*)(unsigned, unsigned, unsigned, unsigned))fp)((p & 3u) << 16, 0x101, 0, a1);
}
