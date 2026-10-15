#include "ds4.h"
extern u8* data_00706E20;
extern u32 ro_00693224;
extern u32 ro_00693228;
extern "C" u8* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(u8*);
extern "C" u32 func_002D55D0(u8*, u32);
u32 f(u8* self) {
  u8* p = *(u8**)(self + 0x28);
  if (*(u32*)(p + 0x620) == 0) return func_002D55D0(self, 2);
  u8* q = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(p + 0x620));
  if (q == 0) return func_002D55D0(self, 2);
  u32 t = func_00588BE4(q);
  if (ro_00693224 == t || ro_00693228 == t) return func_002D55D0(self, 3);
  return func_002D55D0(self, 2);
}
