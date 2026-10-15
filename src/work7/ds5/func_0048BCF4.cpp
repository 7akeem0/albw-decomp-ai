// 0x48BCF4
extern "C" void func_0040DA3C(void*, int, unsigned);

static inline void call(void* p, int v, unsigned a) { if (p) func_0040DA3C(p, v, a); }

struct Cls {
    void* m0;
    void f(unsigned a);
};
void Cls::f(unsigned a) { call(m0, 0, a); }
