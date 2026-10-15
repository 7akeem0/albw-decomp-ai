#include "ds4.h"
extern u8* data_00706E20;
extern "C" u8* func_0052FBA0(void*, u32);
u32 f(u8* self, u8* a1) {
  u8* p = *(u8**)(a1 + 0x2c);
  if (p == 0) return 1;
  if (p[1] != 5) return 1;
  u8* q = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(self + 0x50));
  if (*(u32*)(q + 0xb30) < *(u32*)(q + 0xb34)) return 0;
  return 1;
}
