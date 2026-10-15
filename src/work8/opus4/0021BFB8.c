typedef unsigned int u32; typedef int s32; typedef unsigned short u16; typedef unsigned char u8; typedef signed char s8; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Msg { char pad[0x18]; Vec3 m18; s8 m24; } Msg;
typedef struct O420 { char pad[0x30]; u16 m30; } O420;
typedef struct Actor { char pad[0x420]; O420* m420; char pad424[0x43c - 0x424]; u32 m43c; char pad440[0x5a0 - 0x440]; u32 m5a0; char pad5a4[0x8bc - 0x5a4]; char m8bc[0x1376 - 0x8bc]; u8 m1376; } Actor;
extern const s32 ro_006939A8;
extern void* data_0070FB60;
extern s32 func_00588BE4(Actor*);
extern s32 func_0068C690(const Vec3*);
extern void func_002906A4(void*, s32, s32, s32, f32);
extern void func_004FC244(Actor*, u32, s32, s32, s32);
extern void func_0065DFCC(void*, s32);

s32 FUN_0021bfb8(Actor* self, s32 kind, Msg* m)
{
    s32 b;
    if (kind == 3) return 0;
    if (func_00588BE4(self) == ro_006939A8) {
        s8 k = m->m24;
        if (k == 5 || k == 8 || k == 0xe || k == 0xd) {
            func_002906A4(data_0070FB60, 0, func_0068C690(&m->m18), -(s32)self->m420->m30, 0.3f);
            if (k != 8) return 0;
            set: self->m5a0 |= 0x80; return kind;
        }
        if (k == 9 || k == 10) return 0;
        if (k == 3 || k == 1 || kind == 10) return 0;
    }
    if (kind == 0x12 || kind == 5 || kind == 7 || kind == 10 || kind == 6 || kind == 2 || kind == 0xb) b = 1; else b = 0;
    if ((func_00588BE4(self) == ro_006939A8 && kind != 0x12) || !b) {
        if (self->m1376 == 0) { func_004FC244(self, self->m43c, 0xc, 1, 1); self->m1376 = 1; func_0065DFCC(self->m8bc, 4); return 0; }
    }
    goto set;
}
