#include "ds4.h"
struct T { u8 p0[0x3c]; u32 m3c; u32 m40; u8 p44[8]; u32 m4c; u32 m50;
           u8 p54[8]; u32 m5c; u32 m60; u32 m64; u32 m68; u8 p6c[0x10];
           u32 m7c; u32 m80; u8 p84[0x104 - 0x84]; u8 b104; };
void f(T* self) {
  if (!self->b104) return;
  self->b104 = 0;
  self->m3c = 0;
  self->m4c = 0;
  self->m5c = 0;
  self->m60 = 0;
  self->m7c = 0;
  self->m40 = 0;
  self->m50 = 0;
  self->m64 = 0;
  self->m68 = 0;
  self->m80 = 0;
}
