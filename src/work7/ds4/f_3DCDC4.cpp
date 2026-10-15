#include "ds4.h"
struct This { u32* m0; s32 m4; u32 pad8; s32 m0c; };
extern void func_001163A0(void*, const void*, u32);
void f(This* self, const void* src, s32 n) {
  func_001163A0(&self->m0[self->m0c], src, n * 4);
  s32 v = self->m0c + n;
  self->m0c = v;
  s32 mm = self->m4; if (v >= mm) self->m0c = 0;
}

