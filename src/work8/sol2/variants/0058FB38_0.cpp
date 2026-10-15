
typedef unsigned int u32;
typedef unsigned char u8;

struct Owner58FB {
    u8 pad0[0x1c];
    u32 m1c;
    u8* m20;
    u8* m24;
};

struct Pair58FB {
    u32* first;
    u8* second;
};

void func_0058FB74(u32*,u8*);
u8* func_0069149C(void* self, u8* p, void* ctx);

void func_0058FB38(Owner58FB* self, u32* out, void* ctx)
{
    u8* q = func_0069149C(&self->m24, self->m24, ctx);
    u32* v = (u32*)q;
    if (q)
        v = (u32*)(q + 0x18);
    u32 cnt = self->m1c;
    u32 val = *v;

    Pair58FB r;
    r.first = out; __schedule_barrier();
    u8* second = self->m20;
    if (cnt > val)
        second = second + val * 8;
    r.second = second;
    func_0058FB74(r.first,r.second);
}
