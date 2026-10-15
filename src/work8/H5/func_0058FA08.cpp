typedef unsigned int u32;

extern "C" void* func_0010E2A4(void* mgr, void* p);

struct Obj {
    u32 m0;
};

extern void* data_00715210;

extern "C" void func_0058FA08(void* p) {
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
