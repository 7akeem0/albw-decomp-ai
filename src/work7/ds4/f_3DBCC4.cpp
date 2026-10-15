#include "ds4.h"
struct G { u8 p[0x18]; u8 b18; u8 b19; };
extern G bss_007A19F0;
struct T { u8 p[0xe]; u8 b_e; u8 b_f; };
s32 f(T* self) {
  if (self->b_e) return 1;
  if (!bss_007A19F0.b18) return 0;
  s8 d = (s8)(bss_007A19F0.b19 - self->b_f);
  if (d > 2) return 0;
  return 1;
}

