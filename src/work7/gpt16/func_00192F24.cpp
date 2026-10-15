#include "range.h"
extern bool func_0014F794(void*);extern void func_004CF478(void*,bool,u32);extern void func_00151148(void*,bool);
bool f_00192F24(Obj_00192F24*p){bool result=func_0014F794(p);if(p->kind!=1&&!p->flag){func_004CF478(p->first,result,0);func_00151148(p->second,result);}return result;}
