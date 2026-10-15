#include "ds4.h"
extern __svc(0x32) u32 sendSyncRequest26(u32);
extern u32 data_00716788;
struct Req1B { u32 header, f1, f2, f3, f4, f5; };
static u32 mkCombined(u32 v) { return 0xa | (v << 4); }
u32 func_003D1B6C(u32 a0, u32 a1, u32 a2, u32 a3) {
  u32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  Req1B* cmd = (Req1B*)(tls + 0x80);
  cmd->header = 0x900c2;
  cmd->f1 = a0;
  cmd->f2 = a2;
  cmd->f3 = a3;
  cmd->f5 = a1;
  cmd->f4 = mkCombined(a2);
  u32 result = sendSyncRequest26(data_00716788);
  if ((s32)(result & 0x80000000u) >= 0) result = cmd->f1;
  return result;
}
