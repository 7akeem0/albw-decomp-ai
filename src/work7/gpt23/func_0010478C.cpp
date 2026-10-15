#include "range.h"
__svc(0x32) u32 sendSync(u32);
extern "C" u32 data_00722AB8;
extern "C" u32 func_0010478C(u32 value) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcRequest* command=(IpcRequest*)(tls+0x80);
    command->header=0x60040;
    command->result=value;
    u32 result=sendSync(data_00722AB8);
    if((s32)(result&0x80000000u)>=0)result=command->result;
    return result;
}
