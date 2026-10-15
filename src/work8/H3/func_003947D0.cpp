// func_003947D0: lazy singleton factory. if (g.m4) return; p = new(0x228, heap, 4);
// if (p) { q = ctor(p, heap, 3); *q = vtbl; g.m8 = q; r = conv(p); } else g.m8 = p, r = 0; g.m4 = r;

typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0010CEE0(u32 size, void* heap, s32 align);
extern "C" void* func_0010DA7C(void* a, void* heap, u32 b);
extern "C" void* func_00394D28(void* p);

struct Holder { void* m0; void* m4; void* m8; };
extern "C" Holder data_00708970;

void func_003947D0(void* heap) {
    if (data_00708970.m4) return;
    void* p = func_0010CEE0(0x228, heap, 4);
    void* r;
    if (!p) {
        data_00708970.m8 = p;
        r = 0;
    } else {
        void* hh = heap;
        u32 kk = 3;
        void* q = func_0010DA7C(p, hh, kk);
        *(void**)q = (void*)0x006ef828;
        data_00708970.m8 = q;
        r = func_00394D28(p);
    }
    data_00708970.m4 = r;
}
