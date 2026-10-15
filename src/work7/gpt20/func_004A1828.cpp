#include "ladder_types.h"
struct Words4A18 {u32 a,b,c,d;};
extern "C" u32* func_004A1828(u32*out,u32 tag,const Words4A18*arg){
    *out++=tag|0x80000000u;*out++=0x804f02c0u;*out++=arg->d;*out++=arg->c;*out++=arg->b;*out++=arg->a;return out;
}
