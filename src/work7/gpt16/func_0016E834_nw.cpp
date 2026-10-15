#include "range.h"
extern  void func_0065888C(void*,s32);
bool nonpositive(f32 v){return v<=0;}
void f_0016E834(Obj16E834*p){f32 v=p->value-.05f;if(v<0)v=0;p->value=v;if(!nonpositive(v))return;func_0065888C(&p->state,4);}
