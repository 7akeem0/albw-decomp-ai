#include "../../range.h"
__svc(0x32) u32 svcCall(u32);
extern u32 data_00715878;
struct Request{u32 header,result,second;};
u32 func_00109208(u32 a,u32 b){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Request*c=(Request*)(tls+0x80);c->header=0x420080;c->result=a;c->second=b;u32 r=svcCall(data_00715878);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}

