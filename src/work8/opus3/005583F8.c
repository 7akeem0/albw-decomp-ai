typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Data {
    u8 m0; u8 m1; u8 m2; u8 m3; u8 m4; u8 pad5[3]; s8 m8; s8 m9; s8 ma; s8 mb; u8 mc; u8 md; u8 me; u8 mf;
} Data;
extern s32 func_004F04C4(u8 a, u8 b);

static s32 clamp(s32 v, const s32* lo, const s32* hi)
{
    if (v < *lo) return *lo;
    if (*hi < v) return *hi;
    return v;
}

s32 FUN_005583f8(Data* d)
{
    s32 s;
    if (d->m0 != 0)
        return 5;
    s = 0;
    if (d->m1) s = 50;
    if (d->m2) s += 30;
    if (d->m3) s += 50;
    if (d->m4) s += 100;
    if (d->m8 > 12) s += (d->m8 - 12) * 10 / 4;
    if (d->m9 != 0) {
        if (d->m9 == 1) s += 100;
        else if (d->m9 == 2) s += 150;
        else if (d->m9 == 3) s += 200;
    }
    if (d->ma != 0) {
        if (d->ma == 1) s += 50;
        else if (d->ma == 2) s += 100;
    }
    if (d->mb != 0) {
        if (d->mb == 1) s += 50;
        else if (d->mb == 2) s += 100;
    }
    s += func_004F04C4(d->mc, d->me);
    s += func_004F04C4(d->md, d->mf);
    { s32 lo = 50; s32 hi = 999; return clamp(s, &lo, &hi); }
}
