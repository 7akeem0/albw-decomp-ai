#include "ds4.h"
struct P4F64 { u8 pad[0x158]; f32 f158; };
struct T4F64 { u8 pad[0x40c]; P4F64* m40c; u8 pad2[0x18c]; u32 m59c; u8 pad3[0x9d0-0x5a0]; f32 f9d0, f9d4, f9d8, f9dc; u8 pad4[0x9ea-0x9e0]; u8 b9ea; };
void f(T4F64* self) {
  P4F64* p = self->m40c;
  if (p != 0) {
    p->f158 = 1.0f;
    self->m59c |= 1;
  }
  self->b9ea = 0;
  f32 a = 0.0f;
  f32 b = 0.05f;
  self->f9d0 = a;
  self->f9d4 = b;
  self->f9d8 = a;
  self->f9dc = b;
}
