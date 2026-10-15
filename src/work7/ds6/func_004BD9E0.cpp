typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Vec3 { f32 x, y, z; void setSub(const Vec3& a, const Vec3& b); };
struct Src { u8 p0[0xc]; f32 a; u8 p1[0xc]; f32 b; u8 p2[0xc]; f32 c; };
struct Obj { u8 p0[0x3d0]; Vec3 m3d0; u8 p1[0x3e8 - 0x3dc]; u32 m3e8; };
extern u32 func_004904CC(f32, f32);
void func_004BD9E0(Obj* self, Vec3* v, Src* s) {
  self->m3d0.x = s->a;
  self->m3d0.y = s->b;
  self->m3d0.z = s->c;
  Vec3 d;
  d.setSub(*v, self->m3d0);
  f32 x = d.x;
  f32 z = d.z;
  self->m3e8 = func_004904CC(x, z);
}

