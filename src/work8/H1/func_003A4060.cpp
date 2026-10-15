typedef unsigned int u32;
typedef unsigned char u8;

struct Blk8_3A4060 { u32 w[8]; };
struct Blk4_3A4060 { u32 w[4]; };
struct Ent3A4060 {
    u8 d[0x30];
    void* m30;
    u8 b34;
    u8 p[3];
};
struct Sub3A4060 {
    u8 p0[0x14];
    u8* m14;
};
struct Src3A4060 {
    u8 p0[0x24];
    Sub3A4060* m24;
    u8 p1[0x104 - 0x28];
    u8 m104[0x20];
    u8 m124[0x10];
    u8 p2[0x16b - 0x134];
    u8 b16b;
};
struct Obj3A4060 {
    u8 p0[0x80];
    u32 m80;
    u32 p84;
    Ent3A4060* m88;
};

extern "C" void func_003A4060(Obj3A4060* self, Src3A4060* src, u32 idx) {
    Ent3A4060* e = self->m88;
    if (self->m80 > idx) e += idx;
    e->m30 = src;
    e->b34 = 1;
    if (src->b16b) {
        u8* p = src->m24->m14;
        *(Blk8_3A4060*)e->d = *(Blk8_3A4060*)p;
        *(Blk4_3A4060*)(e->d + 0x20) = *(Blk4_3A4060*)(p + 0x20);
    } else {
        *(Blk8_3A4060*)e->d = *(Blk8_3A4060*)src->m104;
        *(Blk4_3A4060*)(e->d + 0x20) = *(Blk4_3A4060*)src->m124;
    }
}
