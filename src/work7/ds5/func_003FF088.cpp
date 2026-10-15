// 0x3FF088
extern "C" void* func_005689FC(void*);
extern "C" void* func_003FE1A4(void*, int);
struct Cls {
    void* f(int a);
};
void* Cls::f(int a) {
    void* t = func_005689FC((char*)this + 0x30);
    if (t != 0) return t;
    void* p = func_003FE1A4((char*)this + 0x30, a);
    if (p != 0) {
        void** vt = *(void***)this;
        ((void(*)(void*, void*, int))vt[6])(this, p, a);
    }
    return p;
}
