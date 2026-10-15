typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_0012EEE8(void*);
extern "C" char ro_006EF598[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_0070B800;

void* func_0012DF9C(void* heap) {
    if (data_0070B800.m0 != 0) return data_0070B800.m0;
    u8* p = (u8*)func_0010CEE0(0x1850, heap, 4);
    u8* q = p + 0x10;
    if (q != 0) {
        void* hh = heap;
        u32 kk = 3;
        q = (u8*)func_0010DA7C(q, hh, kk);
        *(void**)q = ro_006EF598;
    }
    data_0070B800.m4 = q;
    void* res = p ? func_0012EEE8(p) : 0;
    data_0070B800.m0 = res;
    return res;
}
