typedef unsigned int u32; typedef int s32; typedef short s16; typedef unsigned char u8;
typedef struct Pad { u32 hold; u32 trig; u32 rel; s16 x; s16 y; } Pad;
typedef struct In0 { u32 m0; void* m4; } In0;
typedef struct Self { In0* m0; u32 m4; u32 m8; char mc[0x30 - 0xc]; u8 m30; } Self;
typedef long long Pair;
extern s32 func_003D5638(void);
extern void func_003D4978(void*);
extern void func_003E5F2C(void*, Pad*, s32, s32*, Pair*, s32*);
extern void func_003D4C40(void*, s16*, s16*, s32, s32);
extern s32 func_00102AA8(void);
extern s32 func_0010939C(void);
extern void func_003D5650(Pad*);
static void q1(In0* m, Pad* p, s32* c, Pair* b, s32* a) { func_003E5F2C(m->m4, p, 1, c, b, a); }
static void q2(void* m, Pad* p, s32* c, Pair* b, s32* a) { func_003E5F2C(m, p, 1, c, b, a); }
static void* get4(In0* m) { return m->m4; }
s32 FUN_003d3800(Self* self, Pad* pad)
{
    s32 cnt; Pair b; s32 a; b = -1; a = -1;
    if (func_003D5638() == 0) {
        func_003D4978(self->mc);
        { In0* m = self->m0; func_003E5F2C(m->m4, pad, 1, &cnt, &b, &a); }
        if (cnt > 0) {
            func_003D4C40(self->mc, &pad->x, &pad->y, pad->x, pad->y);
            if (self->m30) { self->m8 = pad->hold; self->m30 = 0; }
            pad->hold &= ~0x2000; pad->trig = (pad->hold ^ self->m8) & ~self->m8; pad->rel = self->m8 & ~pad->hold;
            if (func_00102AA8() && !func_0010939C()) func_003D5650(pad);
            self->m8 = pad->hold;
            return 1;
        }
    }
    return 0;
}
