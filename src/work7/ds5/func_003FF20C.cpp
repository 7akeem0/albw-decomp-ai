// 0x3FF20C
extern "C" void* func_003FDEA8(void*);
extern "C" void func_003FDE18(void*, int, void*, int);
struct Cls { void* f(int a); };
void* Cls::f(int a) {
    void* r = func_003FDEA8((char*)this + 0x24);
    if (r == 0) {
        void** vt = *(void***)this;
        r = ((void*(*)(void*, int))vt[7])(this, a);
        if (r != 0) func_003FDE18((char*)this + 0x24, a, r, 1);
    }
    return r;
}
