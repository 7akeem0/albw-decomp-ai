#include "range.h"
extern void*data_0070FB60;extern bool func_00291C28(void*,void*,u32);
void f_0019C53C(Obj19C53*p){if(p->active){if(func_00291C28(data_0070FB60,p->request,p->value))p->done=1;p->active=0;}}
