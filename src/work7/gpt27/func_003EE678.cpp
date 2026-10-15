#include "range.h"
struct MatrixSource{f32 m[36];};
struct MatrixOwner{f32 m[81];MatrixSource*source;};
inline void copy(MatrixOwner*p,f32 a,f32 b,f32 c,f32 d,f32 e,f32 f){p->m[0x10c/4]=a;p->m[0x11c/4]=b;p->m[0x12c/4]=c;p->m[0xdc/4]=d;p->m[0xec/4]=e;p->m[0xfc/4]=f;}
void func_003EE678(MatrixOwner*p){MatrixSource*q=p->source;copy(p,q->m[0x60/4],q->m[0x70/4],q->m[0x80/4],q->m[0x30/4],q->m[0x40/4],q->m[0x50/4]);}
