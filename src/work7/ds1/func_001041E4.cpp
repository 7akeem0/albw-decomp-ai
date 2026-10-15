// 0x1041E4: TLS singleton init. TLS[0x5c] = tls+0x60; fill a small vtable-ish
// struct with two function pointers + zeros, then a guarded result at +0x1c.
typedef unsigned int u32;
typedef unsigned char u8;

extern "C" void* func_00100048();
extern "C" void* func_00104244();
extern "C" void* func_00100070();
extern "C" void func_weak() __attribute__((weak));

struct S {
    void* m0;    // +0
    void* m4;    // +4
    void* m8;    // +8
    u8    mC;    // +0xc
    u32   m10;
    u32   m14;
    u32   m18;
    void* m1C;
};

void f() {
    u32 tls;
    __asm { mrc p15, 0, tls, c13, c0, 3 }
    *(void**)(tls + 0x5c) = (void*)(tls + 0x60);
    S* p = (S*)(tls + 0x60);
    p->m4 = (void*)&func_00100048;
    p->m8 = (void*)&func_00104244;
    p->m0 = 0;
    p->mC = 0;
    p->m10 = 0;
    p->m14 = 0;
    p->m18 = 0;
    p->m1C = func_weak ? func_00100070() : 0;
}
