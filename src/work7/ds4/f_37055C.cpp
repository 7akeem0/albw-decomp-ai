#include "ds4.h"
struct P7055 { u8 pad[0x14]; u8* m14; };
struct Q7055 { u8 pad[0x24]; P7055* m24; };
struct R7055 { u8 pad[0x40c]; Q7055* m40c; };
struct T7055 { u32 m0; R7055* m4; u32 m8; u32 mC; u32 m10; u32 m14; };
u32 f(T7055* self, u32 unused, u32 idx) {
  if (self->m8 == idx) {
    u8* e = self->m4->m40c->m24->m14 + idx * 0x30;
    self->mC = *(u32*)(e + 0xc);
    self->m10 = *(u32*)(e + 0x1c);
    self->m14 = *(u32*)(e + 0x2c);
  }
  return 0;
}
