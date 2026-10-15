#include "range.h"
__svc(0x32) u32 sendSync(u32);
void setDescriptor(IpcRequest* command,u32 value) { command->descriptor=value; }
extern "C" u32 func_0010412C(const u32* handle,u32 value) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcRequest* command=(IpcRequest*)(tls+0x80);
    command->header=0x8610042;
    command->result=value;
    setDescriptor(command,0x20);
    u32 result=sendSync(*handle);
    if((s32)(result&0x80000000u)>=0) result=command->result;
    return result;
}
