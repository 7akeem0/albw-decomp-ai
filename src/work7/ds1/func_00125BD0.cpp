typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(void*);
extern "C" u32 func_004F7BB8(void*, void*);
extern "C" u32 ro_00693A18;

struct T {
    u8 pad[0x28];
    u32 m28;
};

struct S {
    u32 f(T* a1);
};

u32 S::f(T* a1) {
    void* a = func_0052FBA0((u8*)data_00706E20 + 0x3dbbc, a1->m28);
    if (a != 0 && func_00588BE4(a) == ro_00693A18) return 0;
    return func_004F7BB8(this, a1);
}
