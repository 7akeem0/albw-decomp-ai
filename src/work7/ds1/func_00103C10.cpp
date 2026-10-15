typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010CF28(u32, u32, u32);
extern "C" void* func_00105C7C(void*, void*, const char*);
extern "C" char ro_006ED7DC[];

struct S {
    void* m0;
};

void func_00103C10(S* s) {
    u8* base = (u8*)s->m0;
    u32 n = *(u32*)(base + 0x14);
    u32 key = *(u32*)(base + n * 4);
    void* p = func_0010CF28(0x110, key, 4);
    if (p != 0) {
        void* aa = s;
        const char* bb = "TaskRoot";
        void* q = func_00105C7C(p, aa, bb);
        *(void**)q = ro_006ED7DC;
        *(u8*)((u8*)q + 0x10c) = 0;
    }
}
