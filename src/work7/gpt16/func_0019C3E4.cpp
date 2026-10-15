#include "range.h"
extern f32 func_00521238(void*);extern Ret8 func_004A1B9C(void*,const char*);
inline void start(Obj19C3*p,const char*n){if(p->child)func_004A1B9C(p->child,n);}
void f_0019C3E4(Obj19C3*p){if(func_00521238(p)<1.0f)start(p,"Come");}
