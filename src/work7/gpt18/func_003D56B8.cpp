#include "range.h"
__svc(0x32)u32 sendSync(u32);struct Cmd{u32 header,result;};extern u32 data_00722AB8;u32 f(u32 n){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Cmd*c=(Cmd*)(tls+0x80);c->header=0x70040;c->result=n;u32 r=sendSync(data_00722AB8);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
