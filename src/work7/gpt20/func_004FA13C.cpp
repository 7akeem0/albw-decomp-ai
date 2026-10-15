#include "ladder_types.h"
struct Request4FA1 {char pad0[0x14];Vec3 pos;u8 kind;s8 mode;char pad22[0x16];u32 flags;};
extern "C" void func_004FA174(void*,const Request4FA1*,u32,u32,const Vec3*,s32,u32);
u32 flags4FA1(const Request4FA1*q){return q->flags>>28;}
extern "C" void func_004FA13C(void*p,const Request4FA1*q){func_004FA174(p,q,16,q->kind,&q->pos,q->mode,flags4FA1(q));}
