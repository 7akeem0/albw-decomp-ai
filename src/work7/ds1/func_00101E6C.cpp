typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_00103E9C(void*);
extern "C" char ro_006EF65C[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_00712538;

void* func_00101E6C(void* heap) {
    if (data_00712538.m0 != 0) return data_00712538.m0;
    void* p = func_0010CEE0(0x1ff4, heap, 4);
    void* r;
    if (p == 0) {
        data_00712538.m4 = p;
        r = 0;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = ro_006EF65C;
        data_00712538.m4 = q;
        r = func_00103E9C(p);
    }
    data_00712538.m0 = r;
    return r;
}
