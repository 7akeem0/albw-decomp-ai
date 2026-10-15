#include "ds4.h"
struct T7308 { u32 m0; void* m4; s32 m8; };
extern "C" u32 func_0052E8A0(void*);
extern "C" void func_001DC4C8(void*, u32);
void f(T7308* self, u32 a1) {
  if (a1 != 0) return;
  u32 r = func_0052E8A0(self->m4);
  if (r == 0) { self->m8 = r; return; }
  s32 v = self->m8 + 1;
  self->m8 = v;
  if (v >= 0x96) func_001DC4C8(self->m4, 0);
}
