// 0x41BE38
extern "C" void func_00417134(void*, unsigned);
struct Cls {
    char pad[0xe];
    unsigned char mE;
    char pad2[0x90 - 0xf];
    void* arr[16];
    void f(unsigned a);
};
void Cls::f(unsigned a) {
    mE = a;
    for (int i = 0; i < 0x10; ++i) {
        if (i > 0xf) continue;
        void* p = *(void**)((char*)this + 0x90 + i * 4);
        if (p) func_00417134(p, a);
    }
}
