#include "ds4.h"
struct T { u8 p0[0x2e]; u16 h2e; u8 p1[0x4bd - 0x30]; u8 b4bd; };
extern "C" u32 func_00588BF0(T*, u32);
extern "C"  void func_00668D00(void*, u32);
void f(T* self) {
  if (self->h2e != 1) {
    if (func_00588BF0(self, 1)) func_00668D00((char*)self + 0x4c0, 1);
    return;
  }
  if (!self->b4bd) return;
  func_00668D00((char*)self + 0x4c0, 1);
  self->b4bd = 0;
}
