#include "ds4.h"
extern u8 bss_0079CE10[];
extern u8 ro_006EFAFC[];
extern "C" u8* func_0010FB48(void*);
extern "C" __svc(0x23) void closeHandle23(u32);
u32 f(u32 a0, u32* a1, u32 a2) {
  u8* p = func_0010FB48(bss_0079CE10);
  if (p != 0) {
    *(u32*)p = (u32)ro_006EFAFC;
    *(u32*)(p + 4) = a2;
    *a1 = (u32)p;
    return 0;
  }
  closeHandle23(a2);
  return 0xd8604659;
}
