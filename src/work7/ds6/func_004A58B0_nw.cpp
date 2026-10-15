typedef unsigned char u8;
typedef signed char s8;

extern void func_0066F90C(void*, int) ;

struct Obj {
  u8 p0[0x20];
  u8 m20;
  u8 p1[0x24 - 0x21];
  s8 m24;
  u8 p2[0x84 - 0x25];
  u8 m84;
  u8 m85;
  u8 p3[0x88 - 0x86];
  u8 m88;
};

void func_004A58B0(Obj* self, int a) {
  self->m88 = a;
  s8 v = self->m24;
  if (a != 1) {
    if (v == 2) func_0066F90C(&self->m20, 0);
  } else {
    self->m85 = self->m84;
    if (v == 0) func_0066F90C(&self->m20, 2);
  }
}

