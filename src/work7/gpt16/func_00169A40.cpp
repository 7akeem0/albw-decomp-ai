#include "range.h"
extern void func_00169A80(void*);
void f_00169A40(Obj169A*p,s32 b){u32 n;if(b)n=1;else n=0;f32 v=n;Frame169A*f=p->array->frame;if(f->value!=v){f->value=v;f->dirty=1;}func_00169A80(p->array);}
