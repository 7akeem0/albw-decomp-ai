#include "../../range.h"
__svc(0x32) u32 svcCall(u32);
u32 func_001020F0(const u32*p,u32 value){u32 tls;__asm{mrc p15,0,tls,c13,c0,3} IpcCommand*c=(IpcCommand*)(tls+0x80);c->header=0x8620040;c->result=value;u32 r=svcCall(*p);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
