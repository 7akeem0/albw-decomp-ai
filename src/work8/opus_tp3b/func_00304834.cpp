#include "../../work7/ds4/ds4.h"
struct O { char p0[0x47c]; u32 m47c; char p1[0x4c4 - 0x480]; s8 m4c4; };
extern "C" u32 func_00324A18(O*);
extern "C" void func_004CF478(void*, u32, u32);
s32 func_00332840(O* p) {
  u32 x = func_00324A18(p);
  if (p->m4c4 != 0 && p->m4c4 != 2 && p->m4c4 != 1) func_004CF478((void*)p->m47c, x, 0);
  return 1;
}
