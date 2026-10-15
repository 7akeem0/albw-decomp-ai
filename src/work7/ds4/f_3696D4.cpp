#include "ds4.h"
struct T96D4 { u8 pad[0x3c]; u32 m3c; u8 pad2[4]; u32* m44; u8 pad3[0x78-0x48]; u32 m78; };
extern "C" u32 func_0026045C(u32, u32);
u32 f(T96D4* self) {
  u32* p = self->m44;
  u32* end = p + self->m3c;
  while (p != end) {
    if (self->m78 != *p) {
      if (func_0026045C(*p, self->m78) != 0) return 1;
    }
    p++;
  }
  return 0;
}
