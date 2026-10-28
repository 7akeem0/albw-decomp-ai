typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_004ADB44(void*);
extern "C" char ro_006F8010[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_0070C8E0;

void* func_00101E6C(void* heap) {
    if (data_0070C8E0.m0 != 0) return data_0070C8E0.m0;
    void* p = func_0010CEE0(0x7ac0, heap, 4);
    void* r;
    if (p == 0) {
        data_0070C8E0.m4 = p;
        r = 0;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = ro_006F8010;
        data_0070C8E0.m4 = q;
        r = func_004ADB44(p);
    }
    data_0070C8E0.m0 = r;
    return r;
}
