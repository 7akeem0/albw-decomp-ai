// 0x3E6894
extern "C" void func_001164F4(void*, unsigned int);
extern "C" void func_001164C4(void*, unsigned int, void*);
extern char data_007257AC[];
struct Cls {
    char pad[0x24];
    unsigned int m24;
    void f(void* dest, unsigned int n);
};
void Cls::f(void* dest, unsigned int n) {
    unsigned int flags = m24;
    if (flags & 1) { func_001164F4(dest, n); return; }
    if (flags & 2) { func_001164C4(dest, n, *(void**)(data_007257AC + 4)); return; }
}
