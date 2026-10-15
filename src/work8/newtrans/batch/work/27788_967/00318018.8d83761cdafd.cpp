/* L2C-CPP */
#define EN_EXTRA
#include "../../../../kb/scripts/out/truework/en210.h"
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_00318018(unsigned a0)
{
  unsigned t1;
  a0 = a0 + 0x438;
  t1 = *(unsigned *)((char *)a0);
  if ((t1 != 0) && (*(unsigned *)((char *)t1 + 0x1C) == *(unsigned *)((char *)a0 + 4))) {
  effFadeImpl((Eff*)(t1), 1);
  }
  return;
}
