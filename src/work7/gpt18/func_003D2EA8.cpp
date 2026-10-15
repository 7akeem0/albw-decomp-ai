#include "range.h"
__svc(0x32)u32 sendSync(u32);struct Cmd{u32 header,result,second,value;};u32 f(u32*p,u32*out){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Cmd*c=(Cmd*)(tls+0x80);c->header=0x160000;u32 r=sendSync(*p);if((s32)(r&0x80000000u)>=0){*out=c->value;r=c->result;}return r;}
