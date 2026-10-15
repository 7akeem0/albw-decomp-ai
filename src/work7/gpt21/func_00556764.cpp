#include "range.h"
struct S {char pad[0x500];s32 count;void*child;};
extern s32 func_004378FC(void*);
f32 f_556764(S*p){f32 n=p->count;return n/func_004378FC(p->child);}
