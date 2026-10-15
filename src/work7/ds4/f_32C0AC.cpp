#include "ds4.h"
extern u32 ro_006939FC;
extern "C" void func_0036C2B8(void*, u32);
extern "C" void func_00665670(void*, u32);
extern "C" void func_0036BE48(void*);
void f(u8* self) {
  if (*(u32*)(self + 0xc60) != 0) {
    *(u32*)(self + 0xc60) = 0;
    func_0036C2B8(self + 0xaa0, ro_006939FC);
  }
  u8 v = *(u8*)(self + 0x8f8);
  if (v != 2 && v != 3) func_00665670(self + 0xba8, 4);
  func_0036BE48(self + 0xaa0);
}
