#include "ds4.h"
extern u32 data_0070BB18;
extern "C" void func_0014E138(void*);
extern "C" void func_0016BAF8(u32, u32, s16);
void f(u8* self) {
  func_0014E138(self);
  s8 v = *(s8*)(self + 0x410);
  if (v == 2 || (v == 3 && *(u8*)(self + 0x440) == 2)) {
    func_0016BAF8(data_0070BB18, 2, *(s16*)(self + 0x54));
  }
}
