typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_0051CC00(void*);
extern "C" char ro_006F8184[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_007142C8;

void* func_00101E00(void* heap) {
    if (data_007142C8.m0 != 0) return data_007142C8.m0;
    u8* p = (u8*)func_0010CEE0(0x344, heap, 4);
    u8* q = p + 4;
    if (q != 0) {
        void* hh = heap;
        u32 kk = 3;
        q = (u8*)func_0010DA7C(q, hh, kk);
        *(void**)q = ro_006F8184;
    }
    data_007142C8.m4 = q;
    void* res = p ? func_0051CC00(p) : 0;
    data_007142C8.m0 = res;
    return res;
}
