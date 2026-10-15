typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct T { void* m0; };

struct Obj {
  u8 p0[0x54];
  s32 m54;
  u8 p1[4];
  T** m5c;
  T* m60;
  u8 p2[0x658 - 0x64];
  u32 m658;
};

extern void func_0050450C(void*);

void func_005044B8(Obj* self) {
  for (s32 i = 0; i < self->m54; i++) {
    T* p = self->m5c[i];
    func_0050450C((char*)p + 0x18);
    p->m0 = self->m60;
    self->m60 = p;
  }
  self->m54 = 0;
  self->m658 = 0;
}
