// 0x4145B8
extern "C" void func_003E1600(void*, void*);
struct Cls {
    void* m0[2];
    int m8;
    void f(void* arg);
};
void Cls::f(void* arg) {
    for (int i = 0; i < m8; ++i) {
        void* p = ((void**)this)[i];
        if (p) func_003E1600(p, arg);
    }
}
