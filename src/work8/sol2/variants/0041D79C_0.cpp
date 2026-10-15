
extern "C" int func_00110710(unsigned int, unsigned int);
struct Cls {
    unsigned int m0;
    unsigned int f(unsigned int a1, unsigned int a2, unsigned int a3);
};
unsigned int Cls::f(unsigned int a1, unsigned int a2, unsigned int a3) {
    unsigned int p = (a1 + 3) & ~3u; __schedule_barrier();
    unsigned int stride = (3 + a3) & ~3u;
    int n = func_00110710(a2 - (p - a1), stride);
    for (unsigned int i = 0; i < n; i++) {
        *(unsigned int*)p = m0;
        m0 = p;
        p += stride;
    }
return n;
}
