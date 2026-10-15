/* L2C-CPP */
#define EN_EXTRA
#include "../../../../kb/scripts/out/truework/en210.h"
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_004F1108(unsigned a0)
{
  unsigned t1;
  t1 = *(unsigned *)((char *)a0 + 0xEC);
  if ((t1 != 0) && (*(unsigned *)((char *)t1 + 0x1C) == *(unsigned *)((char *)a0 + 0xF0))) {
  effFadeImpl((Eff*)(t1), 1);
  }
  return;
}
