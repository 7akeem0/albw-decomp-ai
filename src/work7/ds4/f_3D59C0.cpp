#include "ds4.h"
struct T { char pad[8]; u8 m8; u8 m9; union { u16 w; u8 b; } m0a; };
struct O { char pad0[0x10]; u32 m10; char pad1[0x18 - 0x14]; s32 m18; };
s32 func_003D59C0(O* p, T** pp) {
  s32 n = p->m18;
  if (n > 0) { (*pp)->m8 = 0; (*pp)->m0a.w = 0x2e; }
  else { (*pp)->m8 = 7; (*pp)->m0a.b = 0; }
  p->m10++;
  return 0;
}
