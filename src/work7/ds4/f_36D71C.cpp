#include "ds4.h"
extern u8* data_007124F0;
extern "C" u32 func_00111A64(void*);
extern "C" void func_002E0994(u8*, u32);
inline u32 randBelow(u8* st, u32 n) {
  return (u32)(((u64)func_00111A64(st) * n) >> 32);
}
void f(u8* self) {
  u32 r = randBelow(data_007124F0 + 0x660, 3);
  if (r == 0) func_002E0994(self, 0);
  else if (r == 1) func_002E0994(self, 1);
  else if (r == 2) func_002E0994(self, 2);
}
