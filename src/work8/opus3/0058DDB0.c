typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Sub { char pad[0xd]; u8 md; u8 me; char padf[0x88 - 0xf]; u8 m88; } Sub;
typedef struct Hold { char pad[0x28]; Sub* m28; } Hold;
typedef struct Ev { char pad[0xc5]; u8 mc5; } Ev;
typedef struct Obj {
    char pad0[0x20]; Sub* m20; char pad24[0xf0 - 0x24]; Ev* mf0; char padf4[0x114 - 0xf4];
    s32 m114; char pad118[0x12c - 0x118]; Hold* m12c; char pad130[0x33e - 0x130]; u16 m33e;
} Obj;
typedef struct Glob { char pad[0x70]; u8 m70; char pad71[0x2e2 - 0x71]; s8 m2e2; s8 m2e3; } Glob;
extern Glob* data_0070D858;
extern int func_004B083C(void);

static int isOn(Sub* s) { return s->md != 0 || s->me != 0; }

int FUN_0058ddb0(Obj* o)
{
    if ((o->m33e & 0x107) == 0) {
        Sub* s = o->m20;
        if (s != 0 && isOn(s) && s->m88 != 2)
            return 1;
        if (func_004B083C() == 0 && o->mf0->mc5 == 0) {
            Sub* t = o->m12c->m28;
            if (t != 0 && isOn(t))
                return 1;
            if (o->m114 == 0) {
                Glob* g = data_0070D858;
                if (g->m70 == 5) {
                    if (g->m2e2 > g->m2e3)
                        goto fail;
                } else if (g->m70 == 0) {
                } else {
                    goto fail;
                }
            }
        }
    }
    return 1;
fail:
    return 0;
}
