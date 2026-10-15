#include "range.h"
struct S{f32 base;char gap[8];u8 kind,mode;};typedef f32(*Handler)(S*,f32);extern Handler data_00714BB0[][8];extern f32 func_00566F70(S*,f32);f32 f_5670A0(S*p,f32 value){f32 v=func_00566F70(p,value)-p->base;return data_00714BB0[p->kind][p->mode](p,v);}
