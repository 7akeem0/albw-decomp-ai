#include "range.h"
struct S {char pad[0x40];void*child;};
extern void* func_0025BDA4(void*,const void*);
extern void func_0025B6A8(void*,const void*);
bool f_587F74(S*p,const void*name,void*out){void*q=func_0025BDA4(p->child,name);if(!q)return false;if(out)func_0025B6A8(out,q);return true;}
