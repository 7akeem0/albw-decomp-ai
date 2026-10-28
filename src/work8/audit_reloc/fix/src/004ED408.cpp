typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_004ED898(void*);
extern "C" char ro_006F80E8[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_00708998;

void* func_00103230(void* heap) {
    if (data_00708998.m0 != 0) return data_00708998.m0;
    void* p = func_0010CEE0(0x100, heap, 4);
    void* r;
    if (p == 0) {
        data_00708998.m4 = p;
        r = 0;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = ro_006F80E8;
        data_00708998.m4 = q;
        r = func_004ED898(p);
    }
    data_00708998.m0 = r;
    return r;
}
