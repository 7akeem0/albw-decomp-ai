typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned char u8;

struct Pair{u32 a,b;};
struct Q428B84 {
    u8 p0[0x1c];
    u32 m1c;
    u32 m20;
    u32 m24;
    u8 p28[0x44 - 0x28];
    u8 m44;
};
struct S428B84 {
    u8 p0[0x54];
    Q428B84* m54;
    Pair m58;
    u32 m60;
};
struct Triple428B84 {
    u32 a, b, c;
};
extern Triple428B84 bss_0079BA48;

extern "C" void func_00428B84(S428B84* self, void* p) {
    if (p == 0) {
        Q428B84* q = self->m54;
        if (q == 0) return;
        *(Triple428B84*)&q->m1c = bss_0079BA48;
        u8 f = q->m44;
        f &= 0xef;
        f |= 0x10;
        q->m44 = f;
    } else {
        Q428B84* q = self->m54;
        if (!q) return;
        Pair v=*(Pair*)&self->m58; q->m24=self->m60;*(Pair*)&q->m1c=v;
        u8 f=q->m44;f&=0xef;f|=0x10;q->m44=f;
    }
}
