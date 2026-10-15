typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

struct S {
    u32 a, b, c, d;
    u16 e, f;
    u8 g, h;
    u16 i;
    u32 j, k;
};

int func_0011E5E0(u8* out, u8* src, s32 idx) {
    if (src == 0 || out == 0) return 0;
    if (idx < 0) return 0;
    if (*(u16*)(src + 6) <= idx) return 0;
    S* e = (S*)(src + idx * 32 + 0x20);
    S* d = (S*)out;
    d->a = e->a;
    d->b = e->b;
    d->c = e->c;
    d->d = e->d;
    d->e = e->e;
    d->f = e->f;
    d->g = e->g;
    d->h = e->h;
    d->i = e->i;
    d->j = e->j;
    d->k = e->k;
    return 1;
}
