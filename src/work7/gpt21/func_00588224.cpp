#include "range.h"
extern void* func_0057F260(void*);
extern u32 func_00569884(void*,u32);
bool f_588224(Owner588*p,u32 index,u32 mask){u32 bits=func_00569884(func_0057F260(p->child->node),index);if(bits&mask)return true;return false;}
