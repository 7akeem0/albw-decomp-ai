typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

struct Sub58DBA4 {
    u8 p0[0xd];
    u8 b0d;
    u8 b0e;
    u8 p1[0x78 - 0x0f];
    s8 s78;
};
struct Obj58DBA4 {
    u8 p0[0x70];
    Sub58DBA4* m70;
    u16 h74;
};

s32 func_0058DEF4(Obj58DBA4* self);

extern "C" u32 func_0058DBA4(Obj58DBA4* self) {
    if (func_0058DEF4(self) == 0) return 1;
    if (self->h74 != 3) return 1;
    Sub58DBA4* p = self->m70;
    if (!p) return 1;
    if (p->b0d != 3) return 0;
    if (p->b0e != 3) return 0;
    s8 v = p->s78;
    if (v == 0) return 1;
    if (v == 2 || v == 1) return 1;
    return 0;
}
