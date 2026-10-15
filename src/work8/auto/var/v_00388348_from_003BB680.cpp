#include "../../../work7/ds4/ds4.h"
struct Q680 { u8 pad[0x14]; u8* m14; };
struct P680 { u8 pad[0x24]; Q680* m24; };
struct Mid680 { u8 pad[0x52c]; P680* m428; };
struct T680 { u32 m0; Mid680* m4; u32 m8; u32 mC; u32 m10; u32 m14; };
u32 f(T680* self, u32 unused, u32 idx) {
  if (self->m14 == idx) {
    P680* p = self->m4->m428;
    if (p != 0) {
      u8* e = p->m24->m14 + idx * 0x30;
      self->m8 = *(u32*)(e + 0xc);
      self->mC = *(u32*)(e + 0x1c);
      self->m10 = *(u32*)(e + 0x2c);
    }
  }
  return 0;
}
