#include "ds4.h"
extern u8* data_00706E20;
extern "C" u8* func_0052FBA0(void*, u32);
u32 f(u8* self, u8* a1) {
  u32 a = *(u32*)(self + 0x50);
  u32 b = *(u32*)(a1 + 0x28);
  if (b == a) return 0;
  if (func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(a1 + 0x28)) != 0) {
    u8* x = *(u8**)(a1 + 0x34);
    if (x != 0) {
      if (!((*(u16*)(x + 4) & 0xff) == 0xc && *(u16*)(x + 0xa) == 4)) {
        if (*(u16*)(x + 0xa) == 0x11) self[0x2d7] = 1;
      }
    }
  }
  return 1;
}
