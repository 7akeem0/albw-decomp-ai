#include "../../range.h"
__svc(0x32) u32 svcCall(u32);struct Request{u32 header,result,output;};
u32 func_00110740(const u32*p,u32*out){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Request*c=(Request*)(tls+0x80);c->header=0x8630000;u32 r=svcCall(*p);if((s32)(r&0x80000000u)>=0){*out=c->output;r=c->result;}return r;}
