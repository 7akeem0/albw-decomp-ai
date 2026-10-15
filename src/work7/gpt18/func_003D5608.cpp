#include "range.h"
__svc(0x32)u32 sendSync(u32);extern u32 data_00715968;u32 f(){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}IpcCommand18*c=(IpcCommand18*)(tls+0x80);c->header=0x110000;u32 r=sendSync(data_00715968);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
