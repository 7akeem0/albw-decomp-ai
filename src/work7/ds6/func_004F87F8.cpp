typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Sub {
  u8 pad[0x2c];
  u32 m2c;
};

struct Obj {
  u8 pad0[0x424];
  Sub* m424;
  u8 pad1[0x42c - 0x428];
  Sub* m42c;
  u8 pad2[0x7fc - 0x430];
  u8 m7fc;
};

void func_004F87F8(Obj* self, s32 a1) {
  self->m7fc = a1;
  Sub* p = self->m424;
  Sub* q;
  if (a1 == 2) {
    if (p) p->m2c &= ~8u;
    q = self->m42c;
    if (q) q->m2c &= ~8u;
  } else {
    if (p) p->m2c |= 8u;
    q = self->m42c;
    if (q) q->m2c |= 8u;
  }
}
