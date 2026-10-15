typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CEE0(u32, void*, u32);
extern "C" void* func_0010DA7C(void*, void*, u32);
extern "C" void* func_00105DBC(void*);
extern "C" char ro_006F5124[];

struct G {
    void* m0;
    void* m4;
};

extern "C" G data_00716638;

void* func_0048C19C(void* heap) {
    if (data_00716638.m0 == 0) {
        void* p = func_0010CEE0(0x10, heap, 4);
        void* q = p;
        if (p != 0) {
            void* hh = heap; u32 kk = 3;
            q = func_0010DA7C(p, hh, kk);
            *(void**)q = ro_006F5124;
        }
        data_00716638.m4 = q;
        data_00716638.m0 = p;
    }
    return data_00716638.m0;
}
