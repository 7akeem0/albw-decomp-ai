#include "ds4.h"
struct O { u8 p0[0x508]; s16 m508; u8 p1[0xbac - 0x50a]; u8 m_bac;
           u8 p2[0xc92 - 0xbad]; u8 m_c92; };
extern "C" u32 func_004F7A60(O*);
u32 f(O* self) {
  if (self->m508 <= 0) return 0;
  if (!func_004F7A60(self)) return 0;
  if (self->m_bac == 8) self->m_c92 = 0;
  return 1;
}
