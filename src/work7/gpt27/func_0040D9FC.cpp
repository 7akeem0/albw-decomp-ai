#include "range.h"
struct Obj40D {u8 pad[0x10c];u32 member;};
extern void func_00111EF0(void*,void*);extern void func_0040DA20(Obj40D*,void*);
void func_0040D9FC(void* p,Obj40D* q){func_00111EF0(p,&q->member);func_0040DA20(q,p);}
