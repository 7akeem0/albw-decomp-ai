#include "range.h"
struct Obj {u8 pad[0x8c0];u8 flag;};struct Arg {u8 pad[0x21];s8 kind;};
f32 f_002BB8F4(Obj*p,const Arg*a){f32 r=0.0f;s32 kind=a->kind;if(kind!=2){if(kind==16||p->flag)r=1.0f;}return r;}
