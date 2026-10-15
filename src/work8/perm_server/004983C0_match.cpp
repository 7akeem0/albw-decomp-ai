typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef float f32;

extern void* ro_006F6E50;

struct Obj {
  void* m0;
  u32 m4;
  u32 m8;
  u8 mC;
  u8 _pD[3];
  u32 m10;
  u8 m14;
  u8 _p15[3];
  f32 m18;
  f32 m1c;
  f32 m20;
  u16 m24;
  u16 m26;
  u16 m28;
};

void func_004983C0(Obj* self, u32 arg) {
  __schedule_barrier(); self->m4 = 0;
  __schedule_barrier();
  self->m8 = 0; self->m14 = 0;
  self->m10 = arg;
  self->m18 = 0.0f;
  self->m1c = 0.0f;
  self->m20 = 0.0f; __schedule_barrier(); self->mC = 1;
  __schedule_barrier();
  self->m0 = &ro_006F6E50;
  self->m24 = 0; __schedule_barrier();
  self->m26 = 0;
  self->m28 = 0;
}
