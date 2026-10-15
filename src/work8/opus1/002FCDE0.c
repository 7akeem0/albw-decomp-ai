typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Sys { char pad[0x1c]; void* m1c; char pad20[4]; u32* m24; };
struct Obj { char pad[0x2cc]; s32 m2cc; char m2d0[4]; };

extern struct Sys* G_0070FB60;
extern void FUN_00255868(struct Sys* s);
extern void FUN_00255880(struct Sys* s);
extern void FUN_00255a00(struct Sys* s);
extern void FUN_00255bb8(struct Sys* s);
extern void FUN_003614bc(struct Sys* s);
extern void FUN_00361598(struct Sys* s, u8 v);
extern void FUN_0037d1dc(void* p);
extern void FUN_004cbb0c(void* p, s32 a, s32 b, s32 c);
extern void FUN_004e74e8(void* p, u32* v, s32 a, s32 b);

s32 FUN_002fcde0(struct Obj* p, s32 n)
{
    switch (n) {
    case 1:
        if (p->m2cc == 6) FUN_003614bc(G_0070FB60);
        if (p->m2cc == 7) FUN_00361598(G_0070FB60, 0x34);
        if (p->m2cc == 5) FUN_00255868(G_0070FB60);
        if (p->m2cc == 8) FUN_00255880(G_0070FB60);
        if (p->m2cc == 9) FUN_00255a00(G_0070FB60);
        if (p->m2cc == 10) FUN_00255bb8(G_0070FB60);
        break;
    case 2:
        if (p->m2cc == 6) FUN_004cbb0c(G_0070FB60->m1c, 3, 0, 0);
        if (p->m2cc == 7) FUN_004cbb0c(G_0070FB60->m1c, 3, 1, 0);
        if (p->m2cc == 5) {
            struct Sys* s = G_0070FB60;
            u32 v = *s->m24;
            FUN_004e74e8(s->m1c, &v, 2, -1);
        }
        if (p->m2cc == 8 || p->m2cc == 9 || p->m2cc == 10)
            FUN_0037d1dc(p->m2d0);
        break;
    }
    return 1;
}
