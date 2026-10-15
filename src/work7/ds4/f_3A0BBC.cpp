#include "ds4.h"
extern "C" void func_0010E3C4(void*, u32, u32);
extern "C" void func_003A0C98(void*, u32);
extern "C" void func_003A0C04(void*);
void f(void* self_, u32 a1) {
  u8* r4 = (u8*)self_ + 0x388;
  if (a1 != (u32)r4) {
    func_0010E3C4(r4, a1, 8);
    u32 v = *(u32*)(r4 + 4);
    *(u32*)(r4 + 4) = (v << 14) >> 14;
  }
  func_003A0C98(self_, (u32)-1);
  func_003A0C04(self_);
}
