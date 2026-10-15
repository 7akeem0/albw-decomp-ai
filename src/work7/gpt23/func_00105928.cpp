#include "range.h"
__svc(0x32) u32 sendSync(u32);
extern "C" u32 data_00715878;
extern "C" u32 func_00105928(u32 a,u32 b) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcRequest* command=(IpcRequest*)(tls+0x80);
    command->header=0x4f0080;
    command->result=a;
    command->descriptor=b;
    u32 result=sendSync(data_00715878);
    if((s32)(result&0x80000000u)>=0)result=command->result;
    return result;
}
