#include "range.h"
__svc(0x32)u32 sendSync(u32);u32 f(u32*p,u32 a){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}IpcCommand18*c=(IpcCommand18*)(tls+0x80);c->header=0x80a0040;c->result=a;u32 r=sendSync(*p);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
