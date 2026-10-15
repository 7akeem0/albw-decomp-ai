#include "ds4.h"
extern __svc(0x32) u32 sendSyncRequest26(u32);
struct IpcOut68h { u32 header; union { u32 result; u16 in16; }; u16 outH; };
u32 f(const u32* handle, u32 value, u16* outp) {
  u32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  IpcOut68h* command = (IpcOut68h*)(tls + 0x80);
  command->header = 0x00010040;
  command->in16 = *(const u16*)&value;
  u32 result = sendSyncRequest26(*handle);
  if ((s32)(result & 0x80000000u) >= 0) {
    *outp = command->outH;
    result = command->result;
  }
  return result;
}
