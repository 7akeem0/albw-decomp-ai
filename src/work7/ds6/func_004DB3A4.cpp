typedef unsigned char u8;
typedef unsigned int u32;

struct Obj {
  u8 p1[0x7a4];
  void* m7a4;
  u8 p2[0x919 - 0x7a8];
  u8 m919;
  u8 p3[0x9bc - 0x91a];
  u8 m9bc;
};

extern void func_004CF478(void*, int, int);
extern void func_004BC8D8(void*);
extern void func_004BC61C(void*);

void func_004DB3A4(Obj* self) {
  if (self->m9bc != 2) {
    void* p = self->m7a4;
    self->m919 = 1;
    if (p) func_004CF478(p, 0, 0);
  }
  func_004BC8D8(self);
  func_004BC61C(self);
}
