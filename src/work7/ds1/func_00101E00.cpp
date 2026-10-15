typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_00103D30(void*);
extern "C" char ro_006EF63C[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_0070BB50;

void* func_00101E00(void* heap) {
    if (data_0070BB50.m0 != 0) return data_0070BB50.m0;
    u8* p = (u8*)func_0010CEE0(0x2c, heap, 4);
    u8* q = p + 8;
    if (q != 0) {
        void* hh = heap;
        u32 kk = 3;
        q = (u8*)func_0010DA7C(q, hh, kk);
        *(void**)q = ro_006EF63C;
    }
    data_0070BB50.m4 = q;
    void* res = p ? func_00103D30(p) : 0;
    data_0070BB50.m0 = res;
    return res;
}
