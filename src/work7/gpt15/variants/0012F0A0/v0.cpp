#include "../../range.h"
struct S{u8 pad104[0x104];u32 word;f32 value;u8 pad10C[8];u32 sub;u8 pad118[0x144-0x118];f32 extra;};struct Out{u8 pad[0x10];u32 word;f32 value;};extern void func_00405684(S*,Out*);extern bool func_00545248(u32*);void func_0012F0A0(S*p,Out*out){func_00405684(p,out);f32 value=p->value;if(func_00545248(&p->sub))value+=p->extra;out->word=p->word;out->value=value;}
