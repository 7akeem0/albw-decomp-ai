typedef unsigned int u32;

extern "C" void* func_0010E2A4(void* mgr, void* p);

extern void* data_00715210;

extern "C" void func_0058FA5C(void* p) {
    if (p == 0) {
        return;
    }
    void* r = func_0010E2A4(*(void**)&data_00715210, p);
    if (r == 0) {
        return;
    }
    void** vt = *(void***)r;
    ((void (*)(void*, void*))vt[7])(r, p);
}
