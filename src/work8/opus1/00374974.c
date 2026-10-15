typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef int s32;

struct Obj374 { char pad[0x9d0]; u8 m9d0; };

extern const u32 G_006A03DC[];
extern const s32 G_006936FC;
extern const s32 G_00693690;
extern const s32 G_00693694;
extern const s32 G_00693698;
extern const s32 G_0069369C;
extern char G_0077FC80[];
extern char G_0077FCD0[];
extern char G_0077FCE0[];
extern char G_0077FCF0[];
extern char G_0077FD00[];
extern s32 FUN_00588be4(struct Obj374* p);
extern void FUN_00653bb0(struct Obj374* p, u32 a, u32 b, void* tbl, s32 z);

void FUN_00374974(struct Obj374* p, u32 a)
{
    u32 v = G_006A03DC[p->m9d0];
    s32 k = FUN_00588be4(p);
    u32 i;
    if (k == G_006936FC) {
        FUN_00653bb0(p, a, v, G_0077FC80 + p->m9d0 * 8, 0);
        return;
    }
    i = (p->m9d0 != 4);
    if (k == G_00693690) {
        FUN_00653bb0(p, a, v, G_0077FCD0 + i * 8, 0);
        return;
    }
    if (k == G_00693698) {
        FUN_00653bb0(p, a, v, G_0077FCE0 + i * 8, 0);
        return;
    }
    if (k == G_00693694) {
        FUN_00653bb0(p, a, v, G_0077FCF0 + i * 8, 0);
        return;
    }
    if (k == G_0069369C) {
        FUN_00653bb0(p, a, v, G_0077FD00 + i * 8, 0);
        return;
    }
}
