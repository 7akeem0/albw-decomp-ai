// 0x48C3DC
extern "C" unsigned int func_00111A64(void*);
struct Cls {
    int m0;
    char pad[4];
    unsigned int* m8;
    void f(void* rng);
};
void Cls::f(void* rng) {
    int n = m0;
    if (n <= 1) return;
    do {
        unsigned int j = (unsigned int)(((unsigned long long)func_00111A64(rng) * (unsigned int)n) >> 32);
        n--;
        unsigned int t = m8[j];
        unsigned int u = m8[n];
        m8[n] = t;
        m8[j] = u;
    } while (n > 1);
}
