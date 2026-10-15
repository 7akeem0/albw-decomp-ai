

typedef unsigned int u32;
typedef unsigned char u8;

u8* func_0069149C(void* self, u8* p, void* ctx);

struct Self82 {
    u8 pad0[0x38];
    u8* m38;
    u8 pad1[0x4c - 0x3c];
    u8* m4c;
    u8 pad2[0x54 - 0x50];
    u8* m54;
};

u32 func_00582328(Self82* self, void* a)
{
    void* ctx = a;
    if (self->m54 != 0) {
        void* first=ctx;
        u8** pp=&self->m4c;
        u8* q = func_0069149C(pp, *pp, first);
        if (q != 0) {
            u8* p = q + 0x18;
            if (p != 0)
                return *(u32*)p;
        }
    }
    u8* q2 = func_0069149C(&self->m38, self->m38, ctx);
    if (q2 != 0) {
        u8* p2 = q2 + 0x18;
        if (p2 != 0)
            return *(u32*)p2;
    }
    return 0;
}
