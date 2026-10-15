#include "ds4.h"
struct Obj { u8 pad[8]; u8 b8; u8 padx[1]; union { u16 w; u8 b; } u; };
struct Self { u8 pad10[0x10]; u32 m10; u8 pad14[4]; s32 m18; };
u32 f(Self* self, Obj** a) {
  if (self->m18 > 0) { (*a)->b8 = 0; (*a)->u.w = 0x24; }
  else { (*a)->b8 = 0x11; (*a)->u.b = 1; }
  self->m10++;
  return 0;
}
