// 0x43283C: fill a 256-entry table with its own index (not unrolled)
extern int data_00733E3C[256];
struct Counter { int v; Counter(int x) : v(x) {} operator int() const { return v; } Counter& operator++() { ++v; return *this; } };
void func_0043283C() { for (Counter i(0); i < 256; ++i) { int& r = data_00733E3C[i]; r = i; } }
