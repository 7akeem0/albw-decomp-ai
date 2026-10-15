typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef int s32;

struct Sub { char pad[0x40]; char m40[0x80]; char mC0; u8 mC1; };
struct Obj { char pad[0x14]; struct Sub* m14; char m18[0x800]; char pad818[0x9bb - 0x818]; u8 m9bb; char pad9bc[0xc]; u32 m9c8; };
struct G125 { char pad[0x25]; u8 m25; };

extern s32 G_00709DF8;
extern void* G_00709F30;
extern char* G_0070B728;
extern void* G_0070C8E0;
extern void* G_0070D858;
extern void* G_00711010;
extern struct G125* G_00712468;
extern void* G_007142C8;
extern void FUN_0010e3c4(void* d, void* s, u32 n);
extern void FUN_00110490(void* d, u32 n);
extern void FUN_001726e0(void* m, void* p);
extern void FUN_001dbc94(void* m, void* p);
extern void FUN_00320b74(struct Sub* s);
extern void FUN_00320db0(void* p);
extern void FUN_004ad758(void* m);
extern void FUN_004c6a78(void* m, void* p);
extern void FUN_0051c84c(void* m, void* p);
extern s32 FUN_0054d224(struct Sub* s);

s32 FUN_004c3a70(struct Obj* p)
{
    if (G_00709DF8 == 0)
        return 0;
    p->m9c8 = 0;
    FUN_00320b74(p->m14);
    if (FUN_0054d224(p->m14) == 0)
        FUN_00320db0((char*)p->m14 + 0xd60);
    {
        char* d = G_0070B728 + 0x48;
        FUN_0010e3c4(d, p->m14->m40, 0x80);
    }
    FUN_001dbc94(G_00711010, &p->m14->mC0);
    if (G_00709F30)
        FUN_004c6a78(G_00709F30, (char*)p->m14 + 0x260);
    if (G_007142C8)
        FUN_0051c84c(G_007142C8, (char*)p->m14 + 0x360);
    if (G_0070D858)
        FUN_001726e0(G_0070D858, (char*)p->m14 + 0xd80);
    if (G_00712468->m25 == 3)
        FUN_00110490(p->m18, 0x800);
    else
        FUN_0010e3c4(p->m18, (char*)p->m14 + 0x560, 0x800);
    FUN_004ad758(G_0070C8E0);
    p->m9bb = p->m14->mC1;
    return 1;
}
