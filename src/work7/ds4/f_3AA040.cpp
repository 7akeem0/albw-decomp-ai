#include "ds4.h"
struct O { char pad0[0x1e9]; u8 m1e9; char pad1[0x1ec - 0x1ea]; void* m1ec; };
extern "C" void* data_0070B960;
void func_003AA040(O* p) {
  if (p->m1e9 == 1 && *((u8*)p->m1ec + 0x50) == 2) {
    u8* q = (u8*)data_0070B960 + 0x2c1e;
    *q |= 1;
  }
}
