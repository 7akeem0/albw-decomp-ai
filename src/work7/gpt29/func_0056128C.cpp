#include "range.h"
union W{u32 word;u8 kind;};struct O{u32 pad;W*w;};u32 f(O*p){W*w=p->w;if(w){if(w->kind==0xc0||w->kind==0xc1)return w->word>>8;}return 0;}
