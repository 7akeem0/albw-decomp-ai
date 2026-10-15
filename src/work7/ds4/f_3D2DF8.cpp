#include "ds4.h"
extern __svc(0x32) u32 sendSyncRequest26(u32);
struct Req2D { u32 header, f1, f2, f3, f4; };
static u32 mkA(u32 v) { return 0x400 | (v << 14); }
u32 func_003D2DF8(u32* p, u32 a1, u32 a2, u32 a3) {
  u32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  Req2D* cmd = (Req2D*)(tls + 0x80);
  cmd->header = 0xd0082;
  cmd->f1 = a1;
  cmd->f2 = a3;
  cmd->f3 = mkA(a3) | 2;
  cmd->f4 = a2;
  u32 result = sendSyncRequest26(p[0]);
  if ((s32)(result & 0x80000000u) >= 0) result = cmd->f1;
  return result;
}
