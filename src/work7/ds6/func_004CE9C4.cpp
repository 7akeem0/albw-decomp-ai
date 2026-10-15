typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Inner {
  u8 p0[8];
  f32 m8;
  u8 p1[0x26 - 0xc];
  u8 m26;
};

struct Mid {
  u8 p0[0x14];
  Inner* m14;
};

struct Obj {
  u8 p0[0x10];
  void* m10;
  u8 p1[0x20 - 0x14];
  Mid* m20;
};

extern void func_00169A80(void*);
extern void func_004CEA18(void*, void*, u32);

void func_004CE9C4(Obj* self, void* a1, u32 a2) {
  f32 v = (f32)a2;
  Inner* p = self->m20->m14;
  if (p->m8 != v) {
    p->m8 = v;
    p->m26 = 1;
  }
  func_00169A80(self->m20);
  func_004CEA18(*(void**)((char*)self + 0x10), a1, *(u32*)((char*)self + 0xa8));
}
