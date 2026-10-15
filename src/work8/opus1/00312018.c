typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Actor { char pad[0x4cd]; u8 m4cd; };
struct Game { char pad[0x3dbbc]; char actors[4]; };
struct Obj {
    char pad0[0x9b6];
    s16 m9b6;
    char pad9b8[2];
    u8 m9ba;
    char pad9bb;
    u32 m9bc;
    char pad9c0[0xe];
    s16 m9ce;
    u8 m9d0;
    char pad9d1[0xa37 - 0x9d1];
    u8 ma37;
    char pada38[2];
    s8 ma3a;
};

extern struct Game* G_00706E20;
extern struct Actor* FUN_0052fba0(void* mgr, u32 h);
extern void FUN_00652f28(struct Obj* p, u8 v);
extern s32 FUN_00652f8c(struct Obj* p);
extern s32 FUN_00652fbc(struct Obj* p);
extern void FUN_006530a4(struct Obj* p, s32 v);

s32 FUN_00312018(struct Obj* p, s32 n)
{
    struct Actor* a;
    switch (n) {
    case 0:
        p->ma37 = 1;
        return FUN_00652f8c(p);
    case 1:
    case 2:
    case 10:
    case 0xb:
        return 1;
    case 3:
        FUN_00652f28(p, p->m9d0);
        return 1;
    case 4:
        if (FUN_00652fbc(p) != 0)
            return 1;
        goto def;
    case 5:
    case 8:
        if (G_00706E20 != 0 && (a = FUN_0052fba0(G_00706E20->actors, p->m9bc)) != 0)
            a->m4cd = (n == 5) ? 2 : 3;
        return 1;
    case 6:
        p->m9ba = 1;
        return 1;
    case 7:
        p->m9ba = 0;
        return 1;
    case 9:
        p->ma37 = 0;
        return FUN_00652f8c(p);
    case 0xc:
        FUN_006530a4(p, p->ma3a);
        return 1;
    case 0xd:
        if (p->m9d0 == 8) {
            p->m9ce = 10;
            p->m9b6 = 10;
        }
        return 1;
    case 0xe:
        if (p->m9d0 == 2 || p->m9d0 == 7) {
            p->m9ce = 0x14;
            p->m9b6 = 0x14;
        }
        return 1;
    case 0xf:
        if (G_00706E20 != 0 && (a = FUN_0052fba0(G_00706E20->actors, p->m9bc)) != 0)
            a->m4cd = 1;
        return 1;
    default:
    def:
        return 0;
    }
}
