#include "ds4.h"
struct TCD8 { u32 pad0; u32 m4; u32 m8; };
extern "C" u32 func_003CD764(TCD8*);
u32 f(TCD8* self) {
  u32 t0;
  __asm { mrc p15,0,t0,c13,c0,3 }
  u32 m4 = self->m4;
  if (t0 != m4) {
    if (func_003CD764(self) == 0) return 0;
    u32 t1;
    __asm { mrc p15,0,t1,c13,c0,3 }
    self->m4 = t1;
  }
  self->m8 = self->m8 + 1;
  return 1;
}
