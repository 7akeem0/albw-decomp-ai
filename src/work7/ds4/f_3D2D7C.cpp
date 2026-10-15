#include "ds4.h"
extern __svc(0x32) u32 sendSyncRequest26(u32);
struct IpcOut68 { u32 header; union { u32 result; u16 in16; }; u8 outB; };
u32 f(const u32* handle, u32 value, u8* outp) {
  u32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  IpcOut68* command = (IpcOut68*)(tls + 0x80);
  command->header = 0x00020040;
  command->in16 = *(const u16*)&value;
  u32 result = sendSyncRequest26(*handle);
  if ((s32)(result & 0x80000000u) >= 0) {
    *outp = command->outB;
    result = command->result;
  }
  return result;
}
