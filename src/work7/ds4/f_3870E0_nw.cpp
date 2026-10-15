#include "ds4.h"
extern "C" void func_004CF478(void*, u32, u32);
extern "C"  void func_00667C8C(void*, u32);
void f(u8* self) {
  *(u16*)((u32)self + 0x136) = 0;
  self[0x39] = 0;
  self[0x38] = 0;
  func_004CF478(*(void**)(self + 0x3c), 1, 0);
  func_004CF478(*(void**)(self + 0x40), 0, 0);
  func_004CF478(*(void**)(self + 0x44), 0, 0);
  func_00667C8C(self + 0x10, 0);
}
