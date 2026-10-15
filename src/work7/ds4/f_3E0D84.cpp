#include "ds4.h"
struct T { u32 m0; s16 m4; u8 p6[0x6c - 6]; u16 m6c; };
extern u32 bss_007A06F0[];
extern "C" void func_003DF32C(void*, u32, s32);
void f(T* self) {
  if (!(self->m6c & 0x8000)) return;
  func_003DF32C(bss_007A06F0, self->m0 & 0xff, self->m4);
  self->m6c &= ~0x8000;
}
