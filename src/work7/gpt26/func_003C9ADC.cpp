#include "range.h"
u32 func_003C9ADC(const u32* handle) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcRequest26* command=(IpcRequest26*)(tls+0x80);
    command->header=0x08080000;
    u32 result=sendSyncRequest26(*handle);
    if((s32)(result&0x80000000u)>=0)result=command->result;
    return result;
}
