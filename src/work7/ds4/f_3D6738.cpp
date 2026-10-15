#include "ds4.h"
struct Obj { u8 pad[8]; u8 b8; u8 padx[1]; u16 wa; };
struct Self { u8 pad10[0x10]; u32 m10; u8 pad14[4]; s32 m18; };
u32 f(Self* self, Obj** a) {
  if (self->m18 <= 0) { (*a)->b8 = 1; }
  else { (*a)->b8 = 0; (*a)->wa = 0x7c; }
  self->m10++;
  return 0;
}
