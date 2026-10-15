typedef unsigned char u8;
typedef signed int s32;
typedef float f32;

struct Vec3 {
  f32 x;
  f32 y;
  f32 z;
};

struct Obj {
  u8 pad[0x3d0];
  f32 m3d0;
  f32 m3d4;
  f32 m3d8;
};

extern Vec3* func_00520FC0();
extern s32 func_005839C4(Obj*, void*);

s32 impl_0052C728(Obj* const& v0,void* a1){Obj* self=v0;
  Vec3* p = func_00520FC0();
  f32 dx = self->m3d0 - p->x;
  f32 dz = self->m3d8 - p->z;
  f32 d2 = dx * dx + dz * dz;
  if (d2 < 0.09f) return 0;
  return func_005839C4(self, a1);
}
s32 func_0052C728(Obj* self, void* a1){return impl_0052C728(self,a1);}
