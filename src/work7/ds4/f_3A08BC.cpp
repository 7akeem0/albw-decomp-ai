#include "ds4.h"
extern "C" u32 func_0048AC68(u32);
extern "C" void func_002317C0(void*, f32);
void f(u8* self) {
  u8* s = self;
  u32* arr = (u32*)(self + 0x388);
  s32 sum = 0;
  for (u32 i = 0; i < 2; i++) {
    sum += func_0048AC68(arr[i]);
  }
  if (sum >= 0x32) func_002317C0(s + 0x24, 1.0f);
}
