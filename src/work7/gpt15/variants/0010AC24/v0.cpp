#include "../../range.h"
extern DiagnosticRecord bss_0079CCA8;extern void func_00104560(DiagnosticRecord*);
void func_0010AC24(u32 result,u32 pc){DiagnosticRecord*p=&bss_0079CCA8;p->active=0;p->tag=0xcaca;p->kind=0;p->pc=pc;p->result=result;func_00104560(p);}
