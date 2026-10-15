#include "range.h"
__svc(0x32) u32 sendSync(u32);
extern "C" void func_00110D44(void*,const void*,u32);
void copyPayload(IpcRequest* command,const void* input) {
    u32* output=&command->result;
    func_00110D44(output,input,0x80);
}
extern "C" u32 func_00108784(const u32* handle,const void* input) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcRequest* command=(IpcRequest*)(tls+0x80);
    command->header=0x10800;
    copyPayload(command,input);
    u32 result=sendSync(*handle);
    if((s32)(result&0x80000000u)>=0)result=command->result;
    return result;
}
