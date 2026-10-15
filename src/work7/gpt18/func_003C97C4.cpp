#include "range.h"
__svc(0x32)u32 sendSync(u32);struct Cmd{u32 header,result,second;};u32 f(u32*p,u32 unused,u32 a,u32 b){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Cmd*c=(Cmd*)(tls+0x80);c->header=0x80e0080;c->result=a;c->second=b;u32 r=sendSync(*p);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
