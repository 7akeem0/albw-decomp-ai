

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct V4 { u32 m0; f32 x, y, z; };
struct T27A0 { u8 pad[0x16d]; u8 b16d; u8 pad2[0x1e8-0x16e]; f32 f1e8; f32 f1ec; f32 f1f0; };
static bool compare5(u32 a,u32 b){return a<=b;}
static bool compare5(f32 a,f32 b){if(a<=b)return true;return false;}
u32 f(T27A0* self, V4* v) {
  if (self->b16d == 0) return 1;
  f32 d = self->f1e8 * v->x + self->f1ec * v->y + self->f1f0 * v->z;
  return d<=-0.95f;
}
