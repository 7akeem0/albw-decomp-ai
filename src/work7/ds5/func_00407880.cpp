// 0x407880
extern "C" void func_0040789C(unsigned, void*);

struct Cls {
    char pad[0x24];
    void* m24;
    void f(unsigned a);
};

void Cls::f(unsigned a) {
    void* p = m24;
    func_0040789C(a, p ? (char*)p + 4 : 0);
}
