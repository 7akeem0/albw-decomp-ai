typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef float f32;

extern s32 func_00110710(u32, u32);

struct Obj {
  u32 m0;
};

void func_0051D134(Obj* self, s32 n) {
  f32 t = 360.0f / (f32)n;
  s64 v = (s64)(t * (4294967296.0f / 360.0f));
  u32 k = (u32)v;
  if (k == 0) return;
  u32 base = self->m0;
  self->m0 = func_00110710(base + (k >> 1), k) * k;
}
