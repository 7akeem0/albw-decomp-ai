typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Sub130 { char pad[0x74]; u8 m74; } Sub130;
typedef struct Flag16 { u16 v; } Flag16;
typedef struct Glob { char pad[0x130]; Sub130* m130; char pad134[0x33e - 0x134]; Flag16 m33e; } Glob;
typedef struct Obj {
    char pad0[0x964]; u8 m964; char pad965[0xad4 - 0x965]; u8 mad4; char padad5[3]; s32 mad8;
    char padadc[0xae8 - 0xadc]; u8 mae8; char padae9[0xb18 - 0xae9]; u8 mb18;
} Obj;
extern Glob* data_007142C8;
extern void func_00625250(Obj* o, s32 a, s32 b);
extern void func_0051AC54(Glob* g);
extern void func_0051BA4C(Glob* g);
extern void func_0051B06C(Glob* g);
extern int func_0058DC10(Glob* g);
extern _Bool func_0058DABC(Glob* g);
extern void func_0051BFCC(Glob* g);

static void f16_reset(Flag16* f, u16 b) { f->v &= ~b; }
static void f16_set(Flag16* f, u16 b) { f->v |= b; }

int FUN_0030faa0(Obj* o, u32 kind)
{
    switch (kind) {
    case 0:
        if (o->mad4) goto clear;
        if (o->m964 == 2) { func_00625250(o, 0xb, 0); return 0; }
        break;
    case 1:
        if (o->mad4) goto clear;
        if (o->m964 == 2) { o->mae8 = 1; func_00625250(o, 6, 0); return 0; }
        break;
    case 2:
        if (o->mad4) goto clear;
        if (o->m964 != 10) { func_00625250(o, 10, 0); return 0; }
        break;
    case 4:
        if (o->mad4) goto clear;
        if (o->m964 == 2) { o->mae8 = 0; func_00625250(o, 6, 0); return 0; }
        break;
    case 5:
        if (o->mad4) {
        clear:
            o->mad4 = 0; return 1;
        }
        if (o->m964 != 9) { func_00625250(o, 9, 0); return 0; }
        break;
    case 6:
        f16_reset(&data_007142C8->m33e, 8);
        func_0051AC54(data_007142C8);
        goto ok;
    case 7:
        func_0051BA4C(data_007142C8);
    case 3:
    ok:
        return 1;
    case 8:
        func_0051B06C(data_007142C8);
        f16_set(&data_007142C8->m33e, 8);
        goto ok;
    case 9:
        if (func_0058DC10(data_007142C8)) {
            if (!func_0058DABC(data_007142C8)) goto ok;
        } else {
            func_0051BFCC(data_007142C8);
        }
        break;
    case 10:
        data_007142C8->m130->m74 |= 8;
        goto ok;
    case 11:
        data_007142C8->m130->m74 &= ~8;
        goto ok;
    case 12: {
        u8 v;
        switch (o->mad8) {
        case 2: v = 3; break;
        case 3: v = 6; break;
        case 4: v = 8; break;
        case 6: v = 7; break;
        case 7: v = 1; break;
        case 8: v = 4; break;
        case 9: v = 0; break;
        case 10: v = 2; break;
        default: v = 5; break;
        }
        o->mb18 = v;
        goto ok;
    }
    }
    return 0;
}
