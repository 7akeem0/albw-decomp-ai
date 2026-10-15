// 0x41450C
extern "C" void func_003E15CC(void*, int);
struct Cls {
    void* m0;
    void* m4;
    int m8;
    void f(int mode);
};
void Cls::f(int mode) {
    for (int i = 0; i < m8; i++) {
        void* p = ((void**)this)[i];
        if (p != 0) {
            int v = 0;
            if (mode == 0) v = 0;
            else if (mode == 1) v = 1;
            else if (mode == 2) v = 2;
            func_003E15CC(p, v);
        }
    }
}
