#include "ds4.h"
struct O { char pad[0x418]; };
extern "C" s32 func_00588BF0(O*, s32);
extern "C" void func_00666838(void*, s32) ;
void func_0035BE0C(O* p) {
  if (func_00588BF0(p, 0) == 0) return;
  if (func_00588BF0(p, 1) != 0) return;
  func_00666838((char*)p + 0x418, 1);
}
