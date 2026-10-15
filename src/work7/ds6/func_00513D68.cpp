typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Vec3 {
  f32 x, y, z;
  void setAdd(const Vec3& a, const Vec3& b);
};

struct Obj {
  u8 p0[0x3d0];
  Vec3 m3d0;
  u8 p1[0x3e8 - 0x3dc];
  u32 m3e8;
};

extern void func_004D80A4(f32* out, u32 angle, f32 r);

Vec3 func_00513D68(Obj* self) {
  Vec3 a;
  func_004D80A4(&a.x, self->m3e8, -0.15f);
  a.y = 0.0f;
  Vec3 r;
  r.setAdd(self->m3d0, a);
  return r;
}
