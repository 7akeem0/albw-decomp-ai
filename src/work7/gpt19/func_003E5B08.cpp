#include "range.h"
struct Command {u32 header,result;};
extern u32 data_00715878;
__svc(0x32) u32 send(u32);
extern "C" u32 f_003E5B08(u32 value){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Command* c=(Command*)(tls+0x80);c->header=0x190040;c->result=value;u32 r=send(data_00715878);if((s32)(r&0x80000000u)>=0)r=c->result;return r;}
