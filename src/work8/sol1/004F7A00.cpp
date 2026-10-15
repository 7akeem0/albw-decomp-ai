typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
  u8 p0[0x28];
  u32 m28;
  u32 m2c;
  u32 m30;
  u32* m34;
  u8 p1[0x48 - 0x38];
  u32 m48;
  u32 m4c;
};

extern void func_0034CA24(void*);
extern void func_0014E2A0(u32, u32, u32, u32, int, u32);

s32 func_004F7A00(Obj* self) {
  if (self->m34) {
  func_0034CA24(self->m34);
  func_0014E2A0(self->m28, self->m2c, self->m48, self->m30, 0, self->m4c);
  if(*self->m34!=0) return 1;
  }
  return 0;
}
