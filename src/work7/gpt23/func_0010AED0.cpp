#include "range.h"
__svc(0x32) u32 sendSync(u32);
struct IpcCommand { u32 header, result; };
extern "C" u32 func_0010AED0(const u32* handle) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcCommand* command = (IpcCommand*)(tls+0x80);
    command->header = 0x140000;
    u32 result = sendSync(*handle);
    if ((s32)(result & 0x80000000u) >= 0) result = command->result;
    return result;
}
