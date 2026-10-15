#include "ds4.h"
extern "C" void func_003C2554(void*);
void f(u8* self, u32 a1) {
  if (*(u32*)(self + 0x30) != 3 || *(u32*)(self + 0x2c) != 0) return;
  *(u32*)(self + 0x40) = a1;
  *(u32*)(self + 0x30) = 0;
  if (a1 == 0) *(f32*)(self + 0x44) = 0.0f;
  else *(f32*)(self + 0x44) = 1.0f / (f32)a1;
  *(u32*)(self + 0x3c) = 0;
  func_003C2554(self);
}
