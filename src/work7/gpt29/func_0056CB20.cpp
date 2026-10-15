#include "range.h"
struct Owner56CB { char pad0[0x3c]; void* child; };
extern void* func_0056AF9C(void*);
extern void func_0056B8D4(void*);
void f_0056CB20(Owner56CB* p) { void* value=func_0056AF9C(p->child);if(value)func_0056B8D4(value); }
