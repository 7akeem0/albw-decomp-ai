#include "../../work7/gpt21/range.h"
union V{Vec3 xyz;u32 words[3];};struct S{char pad[0x3d0];V pos;};
void f_551D70(S*p,V*out){if(out){out->words[0]=p->pos.words[0];f32 y=p->pos.xyz.y;out->words[1]=p->pos.words[1];out->words[2]=p->pos.words[2];out->xyz.y=y+1.0f;}}
