#include "ds4.h"
extern __svc(0x32) u32 sendSyncRequest26(u32);
struct IpcReq60 { u32 header; u32 in; u32 out; };
u32 f(const u32* handle, u32 in, u32* outp) {
  u32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  IpcReq60* command = (IpcReq60*)(tls + 0x80);
  command->header = 0xC0040;
  command->in = in;
  u32 result = sendSyncRequest26(*handle);
  if ((s32)(result & 0x80000000u) >= 0) {
    *outp = command->out;
    result = command->in;
  }
  return result;
}
