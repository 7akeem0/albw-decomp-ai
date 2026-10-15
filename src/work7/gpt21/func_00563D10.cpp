#include "range.h"
struct Item { u32 m0; void* m4; };
extern Item* func_00563C54(void*,bool,u32);
void* f_563D10(void* p,bool mode,u32 i) { Item* e=func_00563C54(p,mode,i); return e ? e->m4 : 0; }
