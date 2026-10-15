typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Ent16 {
f32 m0;
f32 m4;
f32 m8;
f32 mc;
};
extern const Ent16 ro_006A6D54[];
extern "C" float fabsf(float x);

f32 func_003E2230(f32 f) {
  f32 perm_t10;
    f = fabsf(f);
__schedule_barrier();
    if (f >= 65536.0f) {
        do {
            perm_t10 = f; f = perm_t10 - 65536.0f;
        }
while (f >= 65536.0f);
    }
    u32 iv = (u32)f;
    u16 r = (u16)iv;

    f32 frac = f - (f32)r;
    { const Ent16* e = &ro_006A6D54[r & 0xff];
    return e->m4 + frac * e->mc; }
}
