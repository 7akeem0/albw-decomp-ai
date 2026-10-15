#include "ds4.h"
struct PB74C { u8 pad[0x44]; u8 b44; };
struct QB74C { u8 pad[0x70]; u8 b70; };
struct TB74C { u8 pad[0x1c]; QB74C* m1c; u8 pad2[0x38-0x20]; PB74C* m38; };
void f(TB74C* self, u32 v) {
  PB74C* p = self->m38;
  if (p == 0) return;
  QB74C* q = self->m1c;
  if (q == 0) return;
  u8 b = p->b44;
  u32 cur;
  if (b & 1) cur = 1; else cur = 0;
  if (cur == v) return;
  p->b44 = (u8)((b & 0xfe) | (u8)v);
  if (v != 0) q->b70 = (u8)(q->b70 | 2);
}
