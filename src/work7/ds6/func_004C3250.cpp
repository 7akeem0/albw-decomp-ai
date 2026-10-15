typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

struct Vec3 {
  f32 x;
  f32 y;
  f32 z;
};

struct Obj {
  u8 pad0[0x3d4];
  f32 m3d4;
  u8 pad1[0x3e0 - 0x3d8];
  f32 m3e0;
  u8 pad2[0x580 - 0x3e4];
  f32 m580;
};

extern int func_001E4A5C(Obj*, s32, Vec3*);
extern void func_004C2328(Obj*, s32);

s32 func_004C3250(Obj* self, s32 a1, Vec3* a2) {
  if (func_001E4A5C(self, a1, a2) == 0) return 0;
  f32 d2 = a2->x * a2->x + a2->z * a2->z;
  if (d2 > 0.01f) self->m3e0 = 0.22f;
  self->m580 = self->m3d4 + (-0.28f);
  func_004C2328(self, 2);
  return 1;
}
