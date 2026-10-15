#include "ds4.h"
struct T { u8 p0[0x2c]; void* m2c; u8 p1[0x74 - 0x30]; u8 b74;
           s32 m78; s32 m7c; };
extern "C" void func_0029218C(void*, s32, s32, u32, u32);
void f(T* self) {
  if (!self->b74) return;
  func_0029218C(self->m2c, self->m78, self->m7c, 0, 0);
  self->b74 = 0;
  self->m78 = -1;
  self->m7c = 0;
}
