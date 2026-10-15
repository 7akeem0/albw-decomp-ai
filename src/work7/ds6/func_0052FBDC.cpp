typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;

struct Node {
  u8 pad0[0x58];
  s16 m58;
  u8 pad1[0x2d7 - 0x5a];
  u8 m2d7;
};

struct Obj {
  u32 m0;
  Node** begin;
  u32 m8;
  Node** end;
};

Node* func_0052FBDC(Obj* self, s32 a1, s32 a2) {
  if (a1 <= 0) return 0;
  Node** it = self->begin;
  Node** end = self->end;
  if (end == it) return 0;
  do {
    Node* n = *it;
    if (n != 0 && n->m2d7 == 0 && n->m58 == a1) {
      if (--a2 < 0) return n;
    }
    it++;
  } while (end != it);
  return 0;
}
