#include "range.h"
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_00151148(void*,s32);
extern "C" void func_0013F1D0(Actor13F*,s32);
inline void finish(Actor13F* p,s32 zero){p->secondary->setEnabled(zero);func_00151148(p->child,zero);}
extern "C" void func_0013F18C(Actor13F* p){p->flag=0;func_004CF478(p->model,0,0);finish(p,0);func_0013F1D0(p,0);}
