#include "../../range.h"
__svc(0x32) u32 svcCall(u32);extern u32 data_0071618C;void set(IpcCommand*c,u32 v){c->result=v;}u32 func_0010489C(){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}IpcCommand*c=(IpcCommand*)(tls+0x80);c->header=0x10002;set(c,0x20);u32 r=svcCall(data_0071618C);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
