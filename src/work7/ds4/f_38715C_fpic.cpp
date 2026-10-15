#include "ds4.h"
extern "C" void func_004CF478(void*, u32, u32);
extern "C" void func_00667C8C(void*, u32);
void f(u8* self, u16 a1) {
  self[0x35] = 0;
  self[0x38] = 0;
  self[0x39] = 0;
  func_004CF478(*(void**)(self + 0x3c), 1, 0);
  func_004CF478(*(void**)(self + 0x40), 0, 0);
  func_004CF478(*(void**)(self + 0x44), 0, 0);
  *(u16*)((u32)self + 0x13a) = a1;
  if (a1 == 0) func_00667C8C(self + 0x10, 1);
  else if (a1 == 1) func_00667C8C(self + 0x10, 2);
  else if (a1 == 2) func_00667C8C(self + 0x10, 3);
  else if (a1 == 3) func_00667C8C(self + 0x10, 4);
  else if (a1 == 4) func_00667C8C(self + 0x10, 5);
}
