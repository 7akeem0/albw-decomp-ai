/* L2C-CPP */
#include "../../../../../clone_npc.h"
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00352210(unsigned, unsigned, unsigned, float);
extern unsigned func_00115C54(unsigned, unsigned, unsigned);
extern unsigned func_0032F488(unsigned);
extern unsigned func_004F5BD8(unsigned, unsigned, unsigned);
void func_0032F578(unsigned a0)
{
  unsigned t2;
  unsigned t16;
  t2 = (a0 + 0x800) + 0xBC;
  ((NpcExecState30*)(t2))->execute();
  t16 = a0 + 0x3D0;
  func_00115C54(t16, t16, a0 + 0x3DC);
  func_0032F488(a0);
  func_004F5BD8(a0, 0, 0);
  return;
}
