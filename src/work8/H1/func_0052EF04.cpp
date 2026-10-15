typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Model52EF04 {
    u8 p0[0xac];
    s32 mac;
};
struct Holder52EF04 {
    Model52EF04* m0;
};
struct Self52EF04 {
    u8 p0[0x24];
    Holder52EF04* m24;
    u8 p1[0xe0 - 0x28];
    s32 me0;
    s32 me4;
    u8 p2[0x109 - 0xe8];
    u8 m109;
};
bool func_0057D86C(Holder52EF04* h);

extern "C" bool func_0052EF04(Self52EF04* self, s32 v) {
    if (self->m109 == 0 && !func_0057D86C(self->m24)) return false;
    s32 cur;
    if (!func_0057D86C(self->m24)) {
        cur = self->me0;
    } else {
        Model52EF04* mdl = self->m24->m0;
        if (mdl != 0) cur = mdl->mac;
        else cur = -1;
    }
    if (cur == v) return true;
    return self->me4 == v;
}
