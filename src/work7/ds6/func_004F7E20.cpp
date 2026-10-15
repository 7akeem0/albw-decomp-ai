typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed char s8;

struct Arg {
  u8 pad[0x2c];
  u8* m2c;
};

struct Obj {
  u8 pad0[0x8bc];
  u8 mState[0x4];
  s8 m8c0;
  u8 pad2[0xae8 - 0x8c1];
  u32 mae8;
  u32 maec;
};

extern s32 func_0065D9FC(void*, s32);
extern s32 func_004F7E8C(Obj*, Arg*);

s32 func_004F7E20(Obj* self, Arg* a1) {
  s8 k = self->m8c0;
  if (k == 1 || k == 2) {
    u8* m = a1->m2c;
    if (m != 0) {
      s8 v = *(s8*)(m + 1);
      if (v != -1 && v != 0x1f) {
        func_0065D9FC(self->mState, 2);
        return 0;
      }
    }
  }
  if (self->mae8 < self->maec) return 0;
  return func_004F7E8C(self, a1);
}
