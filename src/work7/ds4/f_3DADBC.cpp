#include "ds4.h"
extern u8 ro_006A7D64[];
extern "C" void func_00102130(u8*);
extern "C" void func_003CD794(void*);
void f(u8* self) {
  if (self[0x19] != 0) func_00102130(ro_006A7D64);
  if (self[0x18] != 0) func_003CD794(self + 4);
  self[0x18] = 0;
  self[0x19] = 0;
  self[0x1a] = 0;
  *(u32*)(self + 0x1c) = 0;
  *(u32*)(self + 0x20) = 0;
  *(u32*)(self + 0x24) = 0;
  *(u32*)(self + 0x28) = 0;
  *(u32*)(self + 0x2c) = 0;
  self[0x30] = 1;
}
