typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef struct Hdr { char pad0[0xc]; s32 numA; s32 numB; s32 numC; s32 numD; void* m1c; } Hdr;
typedef struct EntA { u32 m0; u32 m4; s16 first; s16 last; } EntA;
typedef struct EntC { u32 m0; EntA* m4; u32 m8; u32 mc; u32 m10; u32 m14; u32 m18; u32 m1c; char pad20[0x42 - 0x20]; u8 m42; u8 pad43; } EntC;
typedef struct EntD { u32 m0; EntA* m4; u32 m8; u32 mc; char pad10[8]; u16 m18; char pad1a[0x3c - 0x1a]; } EntD;
typedef struct Dicts { char pad[0x20]; void* d0; void* d1; } Dicts;
typedef struct Res {
    Hdr* m0; char* m4; EntA* m8; EntA* mc; EntC* m10; EntD* m14; u32* m18; Dicts* m1c; void* m20;
} Res;
typedef struct Pair { char* a; EntA* b; } Pair;
extern u32 func_005817F0(void*, u32);
extern u32 func_00581924(void*, u32);

static u32 resolve(Res* r, u32 off) { return func_00581924(r->m20, (u32)r->m18 + off); }
static u32 resolve3(Res* r, u32 off) { u32 a = (u32)r->m18 + off; return func_00581924(r->m20, a); }
static u32 resolve4(Res* r, u32 off) { void* t; u32 a = (u32)r->m18 + off; t = r->m20; return func_00581924(t, a); }
static u32 resolve5(Res* r, u32 off) { u32 a = off + (u32)r->m18; return func_00581924(r->m20, a); }
static u32 resolve7(Res* r, u32* pf) { u32 a = (u32)r->m18 + *pf; return func_00581924(r->m20, a); }
static u32 resolve2(void* t, u32 a) { return func_00581924(t, a); }
void FUN_004a693c(Res* r)
{
    Hdr* h = r->m0;
    s32 i;
    void* d0; void* d1;
    { char* s = (char*)h + 0x20; r->m4 = s; r->m8 = (EntA*)(s + 0x1c); }
    r->mc = r->m8 + h->numA;
    r->m10 = (EntC*)(r->mc + h->numB);
    r->m14 = (EntD*)(r->m10 + h->numC);
    r->m18 = (u32*)(r->m14 + h->numD);
    if (*r->m18 == 0) r->m18 = (u32*)h->m1c;
    d0 = r->m1c->d0; d1 = r->m1c->d1;
    for (i = 0; i < r->m0->numA; i++) {
        EntA* a = &r->m8[i];
        s32 j;
        a->m4 = (u32)r->m18 + a->m0;
        for (j = a->first; j <= a->last; j++) {
            EntC* c = &r->m10[j];
            c->m4 = a;
            if (c->m42 == 0) {
                c->mc = d0 ? func_005817F0(d0, (u32)r->m18 + c->m8) : 0xffff;
                c->m14 = d1 ? func_005817F0(d1, (u32)r->m18 + c->m10) : 0xffff;
            }
            if (c->m1c == 0) c->m1c = resolve7(r, &c->m18);
        }
    }
    for (i = 0; i < r->m0->numB; i++) {
        EntA* a = &r->mc[i];
        s32 j;
        a->m4 = (u32)r->m18 + a->m0;
        for (j = a->first; j <= a->last; j++) {
            EntD* d = &r->m14[j];
            if ((d->m18 & 0x10) && d->m8 == 0) d->m8 = resolve7(r, &d->mc);
            d->m4 = a;
            d->mc = (u32)&r->m8[d->m8];
        }
    }

}
