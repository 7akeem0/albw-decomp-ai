// 0x4143C0
extern "C" void func_003E15B0(void*, void*);
struct Cls {
    void* arr[2];
    int m8;
    char pad[0x23 - 0xc];
    unsigned char m23;
    void f(void* a1);
};
void Cls::f(void* a1) {
    for (int i = 0; i < m8; i++) {
        void* p = ((void**)this)[i];
        if (p != 0) func_003E15B0(p, a1);
    }
    m23 = (unsigned char)(unsigned int)a1;
}
