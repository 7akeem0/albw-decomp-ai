#include "range.h"
__svc(0x32) u32 sendSync(u32);
extern "C" u32 func_0010AE3C(const u32* handle,u32 value,u32 mode) {
    u32 tls;
    __asm { mrc p15,0,tls,c13,c0,3 }
    IpcQuadRequest* command=(IpcQuadRequest*)(tls+0x80);
    command->header=0x160042;
    *(u8*)&command->result=*(const u8*)&mode;
    command->value=value;
    command->reserved=0;
    u32 result=sendSync(*handle);
    if((s32)(result&0x80000000u)>=0)result=command->result;
    return result;
}
