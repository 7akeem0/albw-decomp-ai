#include "../../range.h"
__svc(0x32) u32 svcCall(u32);struct Request{u32 header;u8 value;u8 pad[3];};u32 func_00108AA4(const u32*handle,u32 value){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Request*c=(Request*)(tls+0x80);c->header=0xb0040;c->value=*(const u8*)&value;u32 r=svcCall(*handle);if((s32)(r&0x80000000u)>=0)r=*(u32*)&c->value;return r;}
