#include "../../range.h"
struct State{u8 pad[26];s16 frame;};struct Member{u32 words[3];};struct S{u8 pad[16];State*current;u8 q[16];u8 mode;u8 more[31];Member m;};
extern void func_00110DDC(Member*,s32);void apply(S*p,State*s){func_00110DDC(&p->m,s->frame);p->mode=4;}void func_00110AC0(S*p,State*s){if(p->current==s)apply(p,s);}
