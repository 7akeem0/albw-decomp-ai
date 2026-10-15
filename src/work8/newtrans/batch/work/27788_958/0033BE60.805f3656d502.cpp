/* L2C-CPP */
#define EN_EXTRA
#include "../../../../kb/scripts/out/truework/en210.h"
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_005811E8(unsigned);
void func_0033BE60(unsigned a0, unsigned a1)
{
  unsigned t2, t3, t4;
  if (a1 == 3) {
    return;
  }
  t2 = (a0 + 0x400) + 0xFC;
  t3 = func_005811E8(((a0 + 0x400) + 0xFC));
  t4 = t3;
  if (t3 != 0) {
    t4 = *(unsigned *)((char *)t2);
  }
  if (((t3 != 0) && (t4 != 0)) && (*(unsigned *)((char *)t4 + 0x1C) == *(unsigned *)((char *)t2 + 4))) {
  effFadeImpl((Eff*)(t4), 1);
  }
  return;
}
