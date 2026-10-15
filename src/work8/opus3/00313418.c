typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Flag16 { u16 v; } Flag16;
typedef struct Glob { char pad[0x33e]; Flag16 m33e; } Glob;
typedef struct Obj Obj;
typedef struct ObjVt { char pad[0xac]; void (*fac)(Obj* o, s32 a, s32 b); } ObjVt;
typedef struct Thing Thing;
typedef struct ThingVt { char pad[0x5c]; void (*f5c)(Thing* t, void* p); } ThingVt;
struct Thing { const ThingVt* vt; };
struct Obj {
    const ObjVt* vt; char pad4[0x95a - 4]; u16 m95a; char pad95c[0x964 - 0x95c]; u8 m964;
    char pad965[0x988 - 0x965]; u8 m988;
};
extern Glob* data_007142C8;
extern char bss_0077EF50[];
extern void func_006260FC(Obj* o, s32 st, s32 z);
extern Thing* func_00312754(Obj* o);
extern void func_00626A48(void);
extern void func_0051B770(Glob* g);
extern void func_0051AAD0(Glob* g);
extern void func_0051ABB4(Glob* g);
extern int func_0058D874(Glob* g);
extern void func_0051B784(Glob* g);
extern void func_0051AAE4(Glob* g);
extern void func_0051BFB8(Glob* g);
extern void func_0051AD24(Glob* g);
extern void func_0051B3B0(Glob* g);
extern void func_0051C01C(Glob* g);
extern void func_0051B3F0(Glob* g);

static void f16_reset(Flag16* f, u16 b) { f->v &= ~b; }
static void f16_set(Flag16* f, u16 b) { f->v |= b; }

int FUN_00313418(Obj* o, u32 kind)
{
    Glob* g;
    switch (kind) {
    case 0:
        if (o->m964 != 6) func_006260FC(o, 6, 0);
        break;
    case 1: {
        if (o->m988 == 0) return o->m988;
        o->vt->fac(o, 1, -1);
        { Obj* q = o; q->m988++; }
        break;
    }
    case 2:
        if (o->m964 != 7) { func_006260FC(o, 7, 0); return 0; }
        if (o->m988 != 1) goto ret0;
        break;
    case 3: {
        Thing* t;
        o->vt->fac(o, 1, -1);
        t = func_00312754(o);
        if (t) { void* arg = bss_0077EF50; t->vt->f5c(t, arg); }
        break;
    }
    case 4:
        if (o->m964 != 8) { func_006260FC(o, 8, 0); goto ret0; }
        if (o->m988 != 1) goto ret0;
        break;
    case 5:
        if (o->m964 != 9) func_006260FC(o, 9, 0);
        break;
    case 6:
        o->vt->fac(o, 8, -1);
        if (o->m988 == 0) o->m988 = 1;
        else if (o->m988 == 2) break;
    ret0:
        return 0;
    case 7:
        func_00626A48();
        break;
    case 8:
        g = data_007142C8;
        if (g) {
            f16_reset(&g->m33e, 0x218);
            func_0051B770(g);
            func_0051AAD0(g);
        }
        break;
    case 9:
        if (data_007142C8) func_0051ABB4(data_007142C8);
        break;
    case 10:
        g = data_007142C8;
        if (g) {
            if (o->m95a == 0) { o->m95a = 1; goto ret0; }
            if (o->m95a != 1) goto ret0;
            if (!func_0058D874(g)) goto ret0;
            func_0051B784(g);
            func_0051AAE4(g);
            o->m95a = 0;
            break;
        }
    case 11:
        g = data_007142C8;
        if (g) {
            func_0051ABB4(g);
            func_0051BFB8(g);
        }
        break;
    case 12:
        if (data_007142C8) func_0051AD24(data_007142C8);
        break;
    case 13:
        if (data_007142C8) func_0051B3B0(data_007142C8);
        break;
    case 14:
        g = data_007142C8;
        if (g) {
            func_0051ABB4(g);
            func_0051C01C(g);
        }
        break;
    case 15:
        if (data_007142C8) func_0051B3F0(data_007142C8);
        break;
    case 16:
        g = data_007142C8;
        if (g) {
            func_0051AD24(g);
            f16_set(&g->m33e, 8);
        }
        break;
    }
    return 1;
}
