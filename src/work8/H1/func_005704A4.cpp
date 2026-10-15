typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Owner5704A4 {
    u8 p0[4];
    u8* m4;
    s32 m8;
    s32 mC;
};
struct Link5704A4 {
    u32 m0;
    Link5704A4* next;
};
bool func_0052EF04(void* e, s32 v);

extern "C" bool func_005704A4(Owner5704A4* self, s32 v) {
    if (self->m8 == 0) return false;
    s32 off = self->mC;
    u8* sentinel = (u8*)self - off;
    u8* e = self->m4 - off;
    if (e == sentinel) return false;
    do {
        if (func_0052EF04(e, v)) return true;
        e = (u8*)((Link5704A4*)(e + off))->next - off;
    } while (e != sentinel);
    return false;
}
