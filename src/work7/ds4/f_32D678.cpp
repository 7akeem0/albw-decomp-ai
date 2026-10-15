#include "ds4.h"
extern u8* data_00706E20;
extern u32 ro_006939FC;
extern "C" u8* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(u8*);
extern "C" u32 func_004F7BB8(u8*, u8*);
u32 f(u8* self, u8* a1) {
  u8* p = *(u8**)(a1 + 0x2c);
  if (p != 0) {
    s8 v = (s8)p[1];
    if (v == 1 || v == 0xb || v == 0xf) return 0;
  }
  u8* q = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(a1 + 0x28));
  if (q != 0) {
    if (func_00588BE4(q) == ro_006939FC) return 0;
  }
  return func_004F7BB8(self, a1);
}
