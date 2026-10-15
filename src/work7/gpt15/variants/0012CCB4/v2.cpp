#include "../../range.h"
extern void func_0016739C(CleanupOwner12*,void*,void*);extern void func_002C00D4(void*,CleanupOwner12*,void*);
void clean(CleanupOwner12*p){if(p->argument)func_002C00D4(p->receiver,p,p->argument);}
void func_0012CCB4(CleanupOwner12*p,void*a,void*b){func_0016739C(p,a,b);clean(p);}
