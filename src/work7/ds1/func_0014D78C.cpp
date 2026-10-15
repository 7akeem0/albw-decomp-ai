typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* func_0010DA7C(u32 size, u32 a, u32 b);

struct S {
    void* vt;
    u8 pad[0xc];
    u8 m10, m11, m12, m13;
    u32 m14, m18, m1c, m20, m24, m28, m2c, m30, m34, m38, m3c, m40, m44;
};

S* func_0014D78C(u32 size) {
    S* p = (S*)func_0010DA7C(size, 0, 3);
    p->vt = (void*)0x006c7d60;
    p->m10 = 0; p->m11 = 0; p->m12 = 0; p->m13 = 0;
    p->m14 = 0; p->m18 = 0; p->m1c = 0; p->m20 = 0;
    p->m24 = 0; p->m28 = 0; p->m2c = 0; p->m30 = 0;
    p->m34 = 0; p->m38 = 0; p->m3c = 0; p->m40 = 0; p->m44 = 0;
    return p;
}
