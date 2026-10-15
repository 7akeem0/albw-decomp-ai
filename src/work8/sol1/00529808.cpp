typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct T {
  s32 m0;
  s32 m4;
  s32 m8;
};

struct Obj {
  u8 pad[0x20];
  T* m20;
};

extern s32 func_001104E4(s32, s32);

s32 func_00529808(Obj* self, s32 a1, s32 a2) {
  T* p = self->m20;
  s32 v = p->m8;
  u32 r;
  if (v >= 0) {
    r = (u32)(func_001104E4(v + a2 - 1, a2) * a2);
  } else {
    r = (u32)(func_001104E4(v - a2 + 1, a2) * a2);
  }
  u32 total = (u32)(p->m0 + p->m4);
  u32 d = (r >= total) ? 0 : (total - r);
  s32 result;
  if(d<(u32)a1)result=0;else result=1;
  return result;
}
