typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Vec3 { f32 x, y, z; void set(const Vec3& o){ x=o.x; y=o.y; z=o.z; } };
struct P { u8 _p[0x3d0]; Vec3 v; };

extern void* func_004CADD8(void*, u32);
extern void func_0066A284(void*, u32) ;

struct Obj {
  u8 p0[0x8bc];
  u32 m8bc;
  u8 p1[0x8e8 - 0x8c0];
  Vec3 m8e8;
  u8 p2[0x92c - 0x8f4];
  u32 m92c;
  u8 p3[4];
  u32 m934;
};

void func_004CB768(Obj* self) {
  P* p = (P*)func_004CADD8(self, self->m92c);
  if (p) {
    self->m8e8.set(p->v);
  } else {
    func_0066A284(&self->m8bc, self->m934);
  }
}
