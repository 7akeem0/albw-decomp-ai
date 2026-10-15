typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Part { char pad[0xd]; u8 md; u8 me; };
struct Anim { char pad[8]; u32 m8; char padc[0x14]; u16 m20; char pad22[0x10]; u16 m32; char pad34[9]; u8 m3d; char pad3e[0x22]; s16 m60; };
struct Player;
struct PlayerVt { void* f[24]; void (*play)(struct Player* p, u32 a, s32 b, u32 c); };
struct Player { struct PlayerVt* vt; };
struct Flags1C { char pad[0x70]; u8 m70; };
struct Mgr { char pad[0x338]; s32 m338; };

struct Obj {
    char pad0[0x1c];
    struct Flags1C* m1c;
    char pad20[0xd4 - 0x20];
    char md4[0x10];
    struct Anim* me4;
    struct Player* me8;
    char padec[0x120 - 0xec];
    struct Part* m120;
    char pad124[0xc];
    struct Part* m130;
    char pad134[0xc];
    struct Part* m140;
    void* m144;
    struct Part* m148;
    char pad14c[0xc];
    struct Part* m158;
    char pad15c[0x14];
    s32 m170;
};

extern struct Mgr* G_007142C8;
extern void FUN_0012c790(void* p);
extern void FUN_001788dc(struct Anim* a, void* p);
extern void FUN_001b6c04(void);
extern void FUN_004b948c(struct Obj* o, struct Part* p);

static void startAnim(struct Obj* p, s32 id)
{
    p->m170 = id;
    p->me4->m60 = (s16)id;
    FUN_001788dc(p->me4, p->md4);
    {
        struct Anim* a = p->me4;
        struct Player* pl = p->me8;
        s32 z = 0;
        a->m32 = z;
        a->m3d = z;
        pl->vt->play(pl, p->me4->m8, z, p->me4->m20 >> 1);
    }
    p->m1c->m70 |= 2;
}

void FUN_0043c2c8(struct Obj* p)
{
    struct Part* q;
    s32 id;
    FUN_001b6c04();
    q = p->m148;
    if (q != 0 && q->md == 0 && q->me == 0) {
        q->me = 1;
        FUN_004b948c(p, p->m148);
    }
    FUN_004b948c(p, p->m158);
    p->m158->me = 1;
    FUN_004b948c(p, p->m120);
    p->m120->me = 1;
    FUN_004b948c(p, p->m130);
    p->m130->me = 1;
    FUN_004b948c(p, p->m140);
    p->m140->me = 1;
    FUN_0012c790(p->m144);
    p->m170 = -1;
    if (p->me4 == 0 || p->me8 == 0)
        return;
    id = G_007142C8->m338;
    if (id == -1)
        return;
    startAnim(p, id);
}
