#include "range.h"
void func_0039D434(Obj39D* p,f32 value){
 if(p->kind==0 || p->kind==3){Child39D* child=p->child;child->value=value;if(value<1.0f)p->flag=false;else p->flag=true;}
}
