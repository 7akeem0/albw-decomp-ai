#include "../../range.h"
__svc(0x32) u32 svcCall(u32);extern u32 data_00715878;struct Request{u32 header,result;u8 output;};u32 func_001058A8(u32 value,u8*out){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Request*c=(Request*)(tls+0x80);c->header=0x90040;c->result=value;u32 r=svcCall(data_00715878);if((s32)(r&0x80000000u)>=0){*out=c->output;r=c->result;}return r;}
