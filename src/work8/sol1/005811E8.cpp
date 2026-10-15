typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Q { char pad0[4]; s32 m4; char pad8[4]; u32 mc; };
struct P {
    char pad0[0x1c];
    u32 m1c;
    Q* m20;
    u32 m24;
    char pad28[0x3c - 0x28];
    u32 m3c;
};
struct Holder { P* m0; u32 m4; };

u32 func_005811E8(Holder* self) {
    P* p = self->m0;
    if (p == 0) return 0;
    if (p->m1c != self->m4) return 0;
    if (p->m3c & 4) return 1;
    if (p->m3c & 0x40) return 1;
    Q* q = p->m20;
    if (q != 0) {
      if (p->m24 != q->mc) return 0;
      if (q->m4 > 0) return 1;
    }
    return 0;
}
