#include "range.h"
struct S{char pad[0x8e4];u8 mode;};
f32 f_584808(const S*p){f32 v=1.0f;if(p->mode==1)v=3.0f;return v;}
