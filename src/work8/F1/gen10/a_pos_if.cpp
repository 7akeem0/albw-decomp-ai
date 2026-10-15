typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

struct Src {
  u8 p0[0x20];
  u16 m20;
};

struct Obj {
  u8 p0[0x56c];
  u8 m56c;
};

extern s32 func_001507A8(Obj*, Src*);

s32 func_004C2E98(Obj* self, Src* s) {
  u16 v = s->m20;
  if ((v & 0x7e0) == 0xc0) {
    if ((v & 0x1f) == 7) {
      self->m56c = 1;
      return 0;
    }
  }
  if (func_001507A8(self, s)) {
    u32 bit = 1u << (s->m20 & 0x1f);
    if (!(bit & 0x60)) return 1;
  }
  return 0;
}
