#include "range.h"
struct V2{f32 x,y;};struct R{char pad[0xc];u32 index;V2 value;u32 word;};struct Slots{void*data[16];void*&at(u32 i){if(i<16)return data[i];return data[0];}};struct S{char pad[0x1418];Slots slots;};extern void func_004F0AD4(void*,u32,V2);
inline void apply(S*t,u32 i,V2 v,u32 word){void*c=t->slots.at(i);if(c)func_004F0AD4(c,word,v);}void f_55DA24(R*p,S*t){apply(t,p->index,p->value,p->word);}
