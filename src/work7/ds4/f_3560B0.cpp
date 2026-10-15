#include "ds4.h"
struct P60B0 { u8 pad[0x158]; f32 f158; };
struct T60B0 { u8 pad[0x3a4]; u32 m3a4; u8 pad2[0x40c-0x3a8]; P60B0* m40c; u8 pad3[0x59c-0x410]; u32 m59c; u8 pad4[0x9d0-0x5a0]; f32 f9d0; u8 pad5[0x9ea-0x9d4]; u8 b9ea; };
extern "C" void func_004F88A0(T60B0*, u32);
void f(T60B0* self, u32 a1) {
  if (self->m40c != 0) {
    self->m40c->f158 = 1.0f;
    self->m59c |= 1;
  }
  if (a1 != 4) {
    self->b9ea = 0;
    func_004F88A0(self, self->m3a4);
    self->f9d0 = 0.0f;
  }
}
