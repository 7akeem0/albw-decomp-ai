typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Actor { char pad[0x3d0]; Vec3 pos; char pad3dc[0x511 - 0x3dc]; u8 b511; char pad512[0x8c8 - 0x512]; char m8c8[0xd4c - 0x8c8]; f32 md4c; } Actor;
Actor* func_002F5CD4(Actor* a, s32 n);
void func_002EC1B8(Actor* a, s32 n);
void func_004FABDC(Actor* a, s32 b, s32 c, s32 d);
f32 func_00556764(Actor* a);
s32 func_0058A8F0(Actor* a);
s32 func_0058AB74(Actor* a);
void func_006640EC(void* p, s32 n) __attribute__((weak));

static f32 lerp(f32 a, f32 b, f32 t) { return a + (b - a) * t; }
static f32 lerp2(f32 a, f32 b, f32 t) { return (b - a) * t + a; }
static f32 lerp3(f32 a, f32 b, f32 t) { return a + t * (b - a); }
void func_002EB5A8(Actor* a)
{
    Actor* o = func_002F5CD4(a, 0);
    func_002EC1B8(a, 1);
    if (o != 0) {
        f32 r = 4.0f;
        f32 dx = a->pos.x - o->pos.x;
        f32 dz = a->pos.z - o->pos.z;
        f32 d = dx * dx + dz * dz;
        if (!(r <= d) && o->b511 == 0) {
            a->md4c = lerp(r, 2.0f, func_00556764(o));
            func_006640EC(a->m8c8, 0x10);
            return;
        }
    }
    {
        s32 k = func_0058AB74(a);
        if ((k == 0x1b || k == 0x1c || k == 0x1d) && func_0058A8F0(a)) func_004FABDC(a, 0x18, -1, 0);
    }
}
