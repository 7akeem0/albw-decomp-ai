typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Game { char pad[0x3dbbc]; char actors[4]; };
struct Obj {
    char pad0[0x814];
    u32 m814;
    char pad818[0x852 - 0x818];
    u8 m852;
    char pad853[0x90a - 0x853];
    s16 m90a;
    char pad90c[0x95a - 0x90c];
    u16 m95a;
    char pad95c[0x9c7 - 0x95c];
    u8 m9c7;
};

extern struct Game* G_00706E20;
extern void FUN_003367f0(void* a);
extern s32 FUN_003368d4(void* a);
extern void FUN_004bd6ec(struct Obj* p);
extern void FUN_004bdc4c(struct Obj* p);
extern void FUN_004bdf3c(s32 n);
extern s32 FUN_004beb08(struct Obj* p);
extern void FUN_004c012c(void);
extern void FUN_004c0bd0(struct Obj* p, s32 n);
extern void* FUN_0052fba0(void* mgr, u32 h);

s32 FUN_001868f8(struct Obj* p, s32 n)
{
    void* a;
    if (G_00706E20 == 0)
        return 1;
    if ((u32)(n - 4) >= 4)
        return FUN_004beb08(p);
    switch (n) {
    case 4:
        FUN_004c0bd0(p, 0);
        break;
    case 5:
        if (p->m95a == 0) {
            p->m9c7 = 1;
            FUN_004bdc4c(p);
            FUN_004bd6ec(p);
        }
        break;
    case 6:
        if (p->m95a == 0) {
            FUN_004bdf3c(2);
            p->m95a++;
            goto fail;
        }
        if (p->m852 == p->m90a)
            break;
        goto fail;
    case 7:
        if (p->m95a == 0) {
            a = FUN_0052fba0(G_00706E20->actors, p->m814);
            if (a == 0)
                goto fail;
            FUN_003367f0(a);
            p->m95a++;
            goto fail;
        }
        if (p->m95a != 1)
            goto fail;
        a = FUN_0052fba0(G_00706E20->actors, p->m814);
        if (a == 0)
            goto fail;
        if (FUN_003368d4(a) == 0)
            goto fail;
        FUN_004c012c();
        break;
    }
    p->m95a = 0;
    return 1;
fail:
    return 0;
}
