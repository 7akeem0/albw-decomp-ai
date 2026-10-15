#include "ds4.h"
extern u8* data_00706E20;
extern void* data_0070FB60;
extern "C" u8* func_0052FBA0(void*, u32);
extern "C" u32 func_005568E8(void*);
extern "C" void func_006690CC(void*, u32);
u32 f(u8* self, u8* a1) {
  u32 a = *(u32*)(self + 0x50);
  u32 b = *(u32*)(a1 + 0x28);
  if (b == a) return 0;
  func_0052FBA0(data_00706E20 + 0x3dbbc, b);
  u32 r = func_005568E8(data_0070FB60);
  if (*(u32*)(a1 + 0x28) == r) {
    if ((*(u32*)(a1 + 0x24) & 0x400000) == 0) func_006690CC((u8*)self + 0x40c, 1);
  }
  return 1;
}
