typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align);
extern "C" void* func_0010DA7C(void* a, void* heap, u32 b);
extern "C" void* func_0014AE80(void* p);

struct Data { void* m0; void* m4; };
extern "C" Data data_00712468;

void func_0014A834(void* heap) {
    if (data_00712468.m0) return;
    void* p = func_0010CEE0(0x1144, heap, 4);
    void* r;
    if (!p) {
        data_00712468.m4 = p;
        r = 0;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = (void*)0x006ef5d8;
        data_00712468.m4 = q;
        r = func_0014AE80(p);
    }
    data_00712468.m0 = r;
}
