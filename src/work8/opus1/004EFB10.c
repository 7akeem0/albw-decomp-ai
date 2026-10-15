typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Sub1128 { char pad[0x10c]; u8 m10c; };
struct Sys468 { char pad[0x28]; void* m28; char pad2c[0x1128 - 0x2c]; struct Sub1128* m1128; };
struct Big960 { char pad[0x2c1b]; u8 m2c1b; };
struct Obj {
    char pad0[0x60];
    u8 m60;
    char pad61[4];
    u8 m65;
    u8 m66;
    u8 m67;
    u16 m68;
    char pad6a[0xe];
    s32 m78, m7c, m80, m84;
};

extern struct Sys468* G_00712468;
extern struct Big960* G_0070B960;
extern void* G_00712538;
extern void* G_0070B728;
extern void* G_0070D7D0;
extern void* G_0070A210;
extern void* G_00708998;
extern void* G_0070C8E0;
extern void* G_0070ADB0;
extern void* G_00706E20;
extern void* G_00706CC8;
extern void* G_00709F30;
extern void* G_007142C8;
extern void* G_0070D858;
extern void FUN_001725d0(void* p);
extern void FUN_001e0af4(void* p);
extern void FUN_00260e30(void* p);
extern void FUN_002cb110(void* p);
extern void FUN_004ad81c(void* p);
extern void FUN_004b77c4(void* p);
extern void FUN_004c5100(void* p);
extern void FUN_004c6dd0(void* p);
extern void FUN_004cd45c(void* p);
extern void FUN_004cdbec(void* p);
extern void FUN_004ed740(void* p);
extern __weak void FUN_004ef7ec(struct Obj* p);
extern void FUN_0051c3c8(void* p);

void FUN_004efb10(struct Obj* p)
{
    if (p->m60 != 0 || p->m66 != 0)
        return;
    p->m78++;
    p->m7c++;
    p->m80++;
    p->m84++;
    if (G_00712468->m1128->m10c)
        G_0070B960->m2c1b = 0;
    if (p->m67) {
        FUN_001e0af4(G_00712538);
        p->m67 = 0;
    }
    FUN_004cdbec(G_0070B728);
    FUN_002cb110(G_0070D7D0);
    if (G_0070A210)
        FUN_004b77c4(G_0070A210);
    if (p->m65 && G_00712468->m28) {
        FUN_004ed740(G_00708998);
        FUN_004ad81c(G_0070C8E0);
        FUN_004cd45c(G_0070ADB0);
        FUN_004c5100(G_00706E20);
        FUN_00260e30(G_00706CC8);
    }
    if (G_00709F30)
        FUN_004c6dd0(G_00709F30);
    FUN_0051c3c8(G_007142C8);
    FUN_001725d0(G_0070D858);
    if (p->m68)
        FUN_004ef7ec(p);
}
