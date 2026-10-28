#include "../../../work7/gpt15/variants/001029DC/../../range.h"
__svc(0x32) u32 svcCall(u32);extern u32 data_00716788;struct Request{u32 header,result,reserved,output;};u32 func_001029DC(u32*out){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Request*c=(Request*)(tls+0x80);c->header=0x100000;u32 r=svcCall(data_00716788);if((s32)(r&0x80000000u)>=0){*out=c->output;r=c->result;}return r;}
