typedef unsigned int u32;
typedef unsigned char u8;

struct Entry {
    u32 off;
    u32 x;
};

struct Table {
    u32 n;
    u32 pad;
    Entry e[1];
};

struct Self {
    Table* m0;
    u32 m4;
};

struct Out {
    u32 a;
    u32 b;
};

extern "C" u32 func_0056AA80(Self* self, Out* out, u32 idx) {
    Table* t = self->m0;
    if (t == 0 || t->n <= idx) return 0;
    u8* ptr = (u8*)t + t->e[idx].off;
    if (ptr == 0) return 0;
    out->a = *(u32*)ptr;
    u32 v = *(u32*)(ptr + 8);
    u32 base = self->m4;
    out->b = (v == 0xffffffff) ? 0 : base + v;
    return 1;
}
