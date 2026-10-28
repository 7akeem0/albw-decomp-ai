typedef unsigned char u8;
typedef unsigned int u32;
extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_00172828(void*);
extern "C" char ro_006EF61C[];
struct G { void* m0; void* m4; };
extern "C" G data_0070D858;
void* func_0010C894(void* heap) {
    if (data_0070D858.m0 != 0) return data_0070D858.m0;
    void* p = func_0010CEE0(0x2f8, heap, 4);
    void* r;
    if (p == 0) {
        r = 0;
        data_0070D858.m4 = p;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = ro_006EF61C;
        data_0070D858.m4 = q;
        r = func_00172828(p);
    }
    data_0070D858.m0 = r;
    return r;
}
