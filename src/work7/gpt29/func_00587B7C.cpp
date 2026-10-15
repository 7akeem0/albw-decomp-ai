#include "range.h"
struct Owner587B{char pad0[0x40];void*child;};extern void*func_0025BAE4(void*,u32);extern void func_0025B6A8(void*,void*);
bool f_00587B7C(Owner587B*p,u32 id,void*out){void*s=func_0025BAE4(p->child,id);if(!s)return false;if(out)func_0025B6A8(out,s);return true;}
