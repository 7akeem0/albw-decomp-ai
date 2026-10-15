#include "../../../work7/gpt19/range.h"
struct Triple3D74 {u32 a,b,c;};
struct Command3D74 {u32 header;Triple3D74 fields;u32 last;};
__svc(0x32) u32 send3D74(u32);
extern "C" u32 f_003E3D74(const u32*handle,u32 value,u32 a,u32 b){u32 tls;__asm{mrc p15,0,tls,c13,c0,3}Command3D74*c=(Command3D74*)(tls+0x80);c->header=0x130082;c->last=value;Triple3D74 t={a,b,0};c->fields=t;u32 r=send3D74(*handle);if((s32)(r&0x80000000u)>=0)r=c->fields.a;return r;}
