#include "range.h"
struct S {u8 pad[0x1C];u8 queue[4];u8 gap[0x50];u32 id;u32 word74;u32 mode;};
extern "C" u32 func_0048C11C(void*,u32,u32);
extern "C" u32 f_0048C0EC(S* s,u32 id,u32 flags){if(!id||s->mode==3||s->mode==4||s->id==id)return 0;return func_0048C11C(s->queue,id,flags);}
