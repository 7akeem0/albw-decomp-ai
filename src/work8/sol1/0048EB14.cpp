typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Arg {
  f32 m0;
  u32 m4;
  u32 m8;
  u32 mc;
};

struct Obj {
  u8 pad[0x130];
  u32 m130;
  u8 pad2[0x140 - 0x134];
  void* m140;
};

extern void* func_0057F260(void*);
extern u32 func_0056A0D0(void*, void*);
extern void func_0048EBE8(Obj*, void*, u32, u32, u32, u32);

static inline u32 product48(f32 x,f32 y){return (u32)((f32)x*y);}
void func_0048EB14(Obj* self, Arg* a1) {
  void* p = func_0057F260(self->m140);
  u32 n = func_0056A0D0((char*)self + 4, p);
  self->m130 = n;
  u32 m = n;
  if (n != 0) {
    m=product48((f32)n,a1->m0);
  }
  func_0048EBE8(self, p, m, a1->m4, a1->m8, a1->mc);
}
