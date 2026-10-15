#include "../../work7/gpt16/range.h"
extern bool func_0014F794(void*);extern void func_004CF478(void*,bool,u32);
inline void phase(Obj1C0B*p,bool result){func_004CF478(p->first,result,0);p->second->m44=result;}
bool f_001C0BD4(Obj1C0B*p){bool result=func_0014F794(p);if(!p->flag)phase(p,result);else result=true;return result;}
