#include "range.h"
__svc(0x32) u32 sendSync(u32);
extern "C" u32 data_00715878;
struct IpcCommand {u32 header,result;};
u32 func_003E5AD8(){u32 tls;__asm { mrc p15,0,tls,c13,c0,3 }
IpcCommand*c=(IpcCommand*)(tls+0x80);c->header=0x2b0000;u32 result=sendSync(data_00715878);if((s32)(result&0x80000000u)>=0)result=c->result;return result;}
