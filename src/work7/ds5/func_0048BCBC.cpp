// 0x48BCBC
extern "C" void func_0040DA3C(void*, int, unsigned);

static inline void chk3(void* p, int v, unsigned a) { if (p) func_0040DA3C(p, v, a); }

struct Cls {
    void* m0;
    void f(unsigned a);
};

void Cls::f(unsigned a) { chk3(m0, 1, a); }
